#include<iostream>
#include<string>
#include <cstring>
using namespace std;

void sortChar(string &str1 , string &str2){
    //Time Comp - O(n^2)
    for(int i = 1 ; i < str1.length() ; i++){
        char curr = str1[i];
        int prev = i-1;

        while(prev >= 0 && str1[prev] > curr){
            str1[prev+1] = str1[prev]; // Cpp inbuilt swap function swap(str1[prev] , str1[prev+1]);
            prev--;
        }

        str1[prev+1] = curr;
    }

    for(int i = 1 ; i < str2.length() ; i++){
        char curr = str2[i];
        int prev = i-1;

        while(prev >= 0 && str2[prev] > curr){
            str2[prev+1] = str2[prev]; // Cpp inbuilt swap function swap(str1[prev] , str1[prev+1]);
            prev--;
        }

        str2[prev+1] = curr;
    }
}


bool isAnagram(string str1 , string str2){
    if(str1.length() != str2.length()){
        cout<<"Not anagram\n";
        return false;
    }

    
    if(str1 == str2){
        cout<<"Anagram\n";
        return true;
    }
    else{
        cout<<"Not anagram\n";
        return false;
    }

}

int main(){
    string str1 = "anagram";
    string str2 = "nagaram";
    sortChar(str1 , str2);
    isAnagram(str1 , str2);

    return 0;
}