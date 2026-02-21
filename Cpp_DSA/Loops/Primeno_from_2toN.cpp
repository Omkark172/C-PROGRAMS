//For a positive N , WAP that prints all the prime numbers from 2 to N.(Assume N>=2)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n :";
    cin>>n;
    for(int i = 2 ; i <= n ; i++){
        bool isPrime = true;
        for(int j = 2 ; j < i ; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }
    }
    return 0;
}