//WRITE A FUNTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT
#include<iostream>
using namespace std;

bool isPalin(int n){
    int original, rem, rev=0;
    original = n;
    while(n>0){
        rem = n%10;
        rev = rev * 10 + rem;
        n = n/10;
    }

    if( rev == original){
        return true;
}
    return false;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(isPalin(num)){
        cout<<"The number is palindrome."<<endl;
    }
    else{
        cout<<"The number is not palindrome."<<endl;
    }
    return 0;
}