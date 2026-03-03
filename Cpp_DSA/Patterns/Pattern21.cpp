// 13579
// 3579
// 579
// 79
// 9
#include<iostream>
using namespace std;

int main(){
int num;
int n = 4;
    for(int i = 1; i<=n ; i++){
     num =(i*2)-1;
        for(int j = 5 ; j>=i ; j--){
            cout<<num;
            num+=2;
            
            
        }
        cout<<endl;
        if(i==n){
            cout<<num-2;
        }
    }
  

    return 0;
}