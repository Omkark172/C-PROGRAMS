#include<iostream>
using namespace std;

int sum(int a, int b){ // a, b are parameters are variables in which anything can be stored
    int sum = a+b;
    return sum;
}

int diff(int a, int b){ // a, b are parameters are variables in which anything can be stored
    int diff = a-b;
    return diff;
}
int main(){
    int s = sum(2,4); //2,4 are arguments are fixed values 
    cout<< "sum =" << s <<endl; 
    
    int d = diff(4,2);
    cout<< "diff =" << d <<endl;
    
    return 0;
}