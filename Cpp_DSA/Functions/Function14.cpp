//WAF TO FIND THE BINOMIAL COEFFICIENT FOR GIVEN N AND R 

// nCr = n!/ (r! * (n-r)!)

#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}
int binCoeff(int n, int r){
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);

    int result = val1 / (val2 * val3);
    return result;
}

int main(){
    int n, r;
    cout<< "Enter n and r : ";
    cin>> n >> r;

    cout<< "Binomial Coefficient is : " << binCoeff(n,r) <<endl;

    return 0;
}