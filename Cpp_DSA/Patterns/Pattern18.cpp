//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *

#include<iostream>
using namespace std;

int main(){
    int n = 5;
    //1st part
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j <= n-i ; j++){
            cout<<" ";
        }
        for(int j = 1 ; j <= n-4 ; j++){
            cout<< "*";
        }
        if(i>1){
            for(int j=3 ; j<= (2*i)-1 ; j++){
                cout<<" ";
            }
            for(int j = 1 ; j<= n-4 ; j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    //2nd part
    for(int i = n-1 ; i>=1 ; i--){
        for(int j = 1 ; j <= n-i ; j++){
            cout<<" ";
        }
        for(int j = 1 ; j <= n-4 ; j++){
            cout<< "*";
        }
        if(i>1){
            for(int j=3 ; j<= (2*i)-1 ; j++){
                cout<<" ";
            }
            for(int j = 1 ; j<= n-4 ; j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}