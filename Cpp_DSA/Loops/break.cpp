#include <iostream>
using namespace std;
int main(){
  int i = 1;
 while(i<=5){
    if(i==3){
        break;
    }
    cout<<i<<endl;
    i++;
 } 
  cout<<"Out of loop now"<<endl;
   return 0;
}