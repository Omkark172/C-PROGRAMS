#include<iostream>
using namespace std;

void changeA(int &parameter){ // parameter is tony stark both are pointing to same memory location
    parameter = 20;
    cout<<parameter<<endl;
}

int main(){
    int a = 10; // a is iron man both are same 
    int &b = a;
    b = 25;
    cout<< b<< endl;
    cout<<a<<endl;

    changeA(a);

    cout<<a<<endl;
    return 0;
}