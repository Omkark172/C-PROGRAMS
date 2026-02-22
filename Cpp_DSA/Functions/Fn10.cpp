#include<iostream>
using namespace std;
//WAF TO PRINT THE FACTORIAL OF A NUMBER N


int fact(int n){ 
    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial *= i;
    }
    return factorial; // 0-> 1 ; 1-> 1 ; 2-> 2
}
int main(){
     
    cout<< "factorial of 5 =" << fact(5) <<endl; 
    return 0;
}