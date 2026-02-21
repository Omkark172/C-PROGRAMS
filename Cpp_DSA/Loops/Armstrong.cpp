// WAP to input a number and check whether it is an Armstrong number or not
#include<iostream>
using namespace std;
int main(){
    int n , sum = 0, temp , remainder;
    cout<<"Enter value of n :";
    cin>>n;
    temp = n;
    while(temp != 0){
        remainder = temp % 10;
        sum = sum + (remainder * remainder * remainder);
        temp = temp / 10;
    }
    if(sum == n){
        cout<<"The number is an Armstrong number";
    }
    else{
        cout<<"The number is not an Armstrong number";
    }
    return 0;
}