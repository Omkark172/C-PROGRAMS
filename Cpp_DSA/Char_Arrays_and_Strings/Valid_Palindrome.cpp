#include<iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char word[] , int n){
    int st = 0 , end = n-1;
        while(st < end){
            if(word[st] != word[end]){ //if(tolower(word[st]) != tolower(word[end])) Can also use this condition to ignore uppercase and lowercase
                cout<<"not valid palindrome\n";
                return false;
            }
            st++;
            end--;
        }
        cout<<"valid palindrome\n";
        return true;
    
}

int main(){
    char word[] = "madam";
    isPalindrome(word , strlen(word));
    return 0;
}