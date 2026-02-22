//WRITE A FUNCTION WHICH TAKES TWO NUMBERS AS PARAMETERS (a & b) AND RETURNS OUTPUT AS THE SUM OF ALL THE NUMBERS BETWEEN a & b (INCLUDING a & b)
#include<iostream>
using namespace std;

int sumofRange(int a, int b){
    int sum = 0;
    for(int i = a; i <= b ; i++){
        sum = sum + i;
    }
    return sum;
}

int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"The sum of all the numbers between "<<a<<" and "<<b<<" is: "<<sumofRange(a,b)<<endl;

    return 0;
}