// WAP where user can keep entering numbers till they enter a multiple of 10
#include <iostream>
using namespace std;
int main(){
   int num;
    do{
        cout<<"Enter a number: ";
        cin>>num;
        cout<<num<<endl;
        
    }while(num%10!=0);
   return 0;
}