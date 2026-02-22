#include<iostream>
using namespace std;
//In default paramters 1st parameter cannot be 1 or default

int sum(int a, int b=1){ // a, b are parameters are variables in which anything can be stored
    int sum = a+b;
    return sum;
}
int main(){
    int s = sum(2); //2,4 are arguments are fixed values 
    cout<< "sum =" << s <<endl; 
    return 0;
}