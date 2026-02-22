//WAF TO PRINT IF A NUMBER IS PRIME OR NOT

#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n==1){
        return false;
    }   
    for(int i = 2; i <n ; i++){
        if(n %i == 0){
            return false;
        }else{
            return true;
        }
    }
    
}

bool isPrime2(int n){
    if(n==1){
        return false;
    }   
    for(int i = 2; i*i <=n ; i++){
        if(n %i == 0){
            return false;
        }
    }
    return true;
}

int main(){
     int n;
    cout<< "Enter a number : ";
    cin>> n;
    cout<<isPrime(n)<<endl;
    cout<<isPrime2(3)<<endl;

    return 0;
}