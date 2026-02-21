//     1
//    212
//   32123
//  4321234
// 543212345

#include <iostream>
using namespace std;
int main(){
    int val;
 int n = 5;
 //My logic
    for(int i = 1; i<=n ; i++){
        //spaces
        for(int j = 1; j <= n-i ; j++){
            cout<<" ";
        }
        val =i;
        //Num backwards
        for(int j = 1; j <= i;j++){
            cout<<val;
            val--;
        }
        //Num forwards
        val = 2;
        for(int j =2; j <= i ; j++){
            cout<<val;
            val++;
        }
        cout<<endl;
    
 }
//Mams Logic
// for(int i = 1; i<=n ; i++){
//         //spaces
//         for(int j = 1; j <= n-i ; j++){
//             cout<<" ";
//         }
        
//         //Num backwards
//         for(int j = i; j >= 1;j--){
//             cout<<j;
//         }
//         //Num forwards
        
//         for(int j =2; j <= i ; j++){
//             cout<<j;
//         }
//         cout<<endl;
    
// }

return 0;
}