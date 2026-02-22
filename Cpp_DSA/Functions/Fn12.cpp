//Scope of a variable ; Global Variable 

#include <iostream>
using namespace std;
int num =25; // global variable

void sum(int a , int b){
    cout<< num<<endl; 
    
    int s = a+b;
    cout<< s<<endl;
}

int main(){
    sum(10,20);
    int s = 10;
    cout<< s;
    cout<<num<<endl;

    return 0;
}