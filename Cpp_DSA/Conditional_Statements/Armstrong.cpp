#include<iostream>
using namespace std;
int main(){
    int num , originalNum , remainder , result = 0;
    cout<<"Enter an integer (3 digit number): ";
    cin>>num;
    originalNum = num;
    while(num != 0){
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num /= 10;
    }
    if(result == originalNum){
        cout<<"It is an Armstrong number."<<endl;
    }else{
        cout<<"It is not an Armstrong number."<<endl;
    }
    return 0;
}