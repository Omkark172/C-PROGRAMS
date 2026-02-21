//     *****
//    *   *
//   *   *
//  *   *
// *****

#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1 ; i<=n ; i++){
        //Space loop
        for(int j = 1; j <= n-i ; j++){
            cout<<" ";
        }
        cout<<"*";
        //star loop
        for(int j = 1; j<=3 ; j++){
            if(i==1 || i==n){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<"*";
        
        cout<<endl;

    }
    

    return 0;
}
