#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    
    if(age>=18){
        cout<<"You are eligible to vote"<<endl;
    }
    if(age >=45){
        cout<<"Contest for elections"<<endl;
    }
    return 0;
}