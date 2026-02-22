#include<iostream>
using namespace std;

int sum(int a, int b){ // a, b are parameters are variables in which anything can be stored
    int sum = a+b;
    return sum;
}
int main(){
    int s = sum(2,4); //2,4 are arguments are fixed values 
    cout<< "sum =" << s <<endl; 
    return 0;
}
