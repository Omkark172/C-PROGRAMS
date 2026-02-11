#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a: ";
    cin>>a;
    int b;
    cout<<"Enter b: ";
    cin>>b;

    int largest = (a >= b) ? a : b;
    cout<<"The largest number is: "<<largest<<endl;
    return 0;
}