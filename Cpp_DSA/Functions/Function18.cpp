//WRITE A FUNCTION THAT ACCEPTS A CHARACTER (ch) AS PARAMETER & RETURNS THE CHARACTER THAT OCCURS AFTER ch IN ENGLISH ALPHABET
// Eg : input  = 'c' , return value = 'd'
//Note for ch = 'z' , return value should be 'a'
#include<iostream>
using namespace std;

char nextChar(char ch){
    if(ch == 'z' || ch == 'Z'){
        return 'a';
    }
    else{
        return ch + 1;
    }
}

int main(){
    char ch;
    cout<<"Enter a character :";
    cin>>ch;

    char result = nextChar(ch);
    cout<<"The next character is: "<<result<<endl;
}