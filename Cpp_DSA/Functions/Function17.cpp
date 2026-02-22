// Write a function which takes 2 numbers as parameters (a & b) and outputs ; a^2 + b^2 + 2*ab

#include<iostream>
using namespace std;

int Identity(int a , int b){
    return (a*a) + (b*b) + (2*a*b);
}

int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<Identity(a,b)<<endl;

    return 0;
}