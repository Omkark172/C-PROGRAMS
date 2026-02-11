#include<iostream>
using namespace std;
int main(){ 
 
 int x = 200 , y = 50 , z=100;
    if(x>y && x>z){
        cout<<"Hello"<<endl;
    }
    if(z>y && z<x){
        cout<<"C++"<<endl;
    }
    if((y+200)<x&&(y+150)<z){
        cout<<"Hello C++"<<endl;
    }
    return 0;
}

   