#include<iostream>
using namespace std;
int main(){
    float principal,rate,time;
    cout<<"Enter the principal amount:";
    cin>>principal;
    cout<<"Enter the rate of interest:";
    cin>>rate;
    cout<<"Enter the time period:";
    cin>>time;
    float si = (principal * rate * time) / 100;
    cout<<"Simple Interest = "<<si;
    return 0;
}