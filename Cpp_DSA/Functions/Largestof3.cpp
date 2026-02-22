//WRITE A FUNCTION THAT PRINTS LARGEST OF 3 NUMBERS
#include<iostream>
using namespace std;

void largest(int a , int b , int c ){
    if(a>=b && a >=c){
        cout<<a<<" is the largest number."<<endl;
    }else if(b>=c){
        cout<<b<<" is the largest number."<<endl;
    }else{
        cout<<c<<" is the largest number."<<endl;
    }
}

int main(){
    int a, b, c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    largest(a,b,c);

    return 0;
}