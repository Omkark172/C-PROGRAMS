#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string str1 , string str2){

    // str1 = m
    // str2 = n
    // O(n+m)
    
    if(str1.length() != str2.length()){
        cout<<"Not anagram\n";
        return false;
    }
    char count[26] = {0};
    for(int i=0 ; i<str1.length() ; i++){
        int idx = str1[i] - 'a';
        count[idx]++; // count[str1[i] - 'a']++;
    }

    for(int i=0 ; i<str2.length() ; i++){
        int idx = str2[i] - 'a';
        if(count[idx] == 0){ // if(count[str1[i] - 'a'] == 0);
            cout<<"Not anagram\n";
            return false;
        }
        count[idx]--; // count[str1[i] - 'a']--;
    }
    cout<<"Anagram\n";
    return true;

}

int main(){

    string str1 = "anagram";
    string str2 = "nalaram";

    isAnagram(str1 , str2);


    return 0;
}