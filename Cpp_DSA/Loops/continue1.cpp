//WAP TO SHOW NUMBERS ENTERED BY USER EXCEPT MULTIPLES OF 10
#include <iostream>
using namespace std;
int main(){
   int num;
    do{
        cout<<"Enter a number: ";
        cin>>num;
        if(num%10==0){
            continue;
        }
        cout<<"You entered:"<<num<<endl;
        
    }while(true);
   return 0;
}