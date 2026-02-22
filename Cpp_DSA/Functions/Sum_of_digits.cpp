//WRITE A FUNCTION TO CALCULATE THE SUM OF DIGITS OF A NUMBER
#include<iostream>
using namespace std;

int sumofDigits(int n){
    int rem , sum = 0;
    while(n>0){
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }
    return sum;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The sum of digits of the number is: "<<sumofDigits(num)<<endl;

    return 0;
}