#include<iostream>
#include<string>
using namespace std;

// You are given two strings s1 and s2 of equal length.A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the 
// characters at these indices. 

// Return true if it is possible to make both strings equal by performing atmost one string swap on exactly one of the strings. Otherwise, return
// false.

// Example:
// Input:s1 = "bank", s2 = "kanb"
// Output:true
// Explanation : For example, swap the first character with the last character of s2 to make "bank"

bool strSwap(string &str1 , string &str2){
    if(str1.length() != str2.length()){
        return false;
    }
    int first = -1 , second = -1;

    for(int i = 0; i < str1.length(); i++){
        if(str1[i] != str2[i]){
            if(first == -1){
                first = i;
            }
            else if(second == -1){
                second = i;
            }
            else{
                cout<<"false " << endl;
                return false;
            }
        }
    }
    swap(str1[first] , str1[second]);
    if(str1 == str2){
        cout<<"true " << endl;
        return true;
    }else{
        cout<<"false " << endl;
        return false;
    }
}

int main(){
    string str1 = "bank";
    string str2 = "kanb";
    strSwap(str1 , str2);
    return 0;
}