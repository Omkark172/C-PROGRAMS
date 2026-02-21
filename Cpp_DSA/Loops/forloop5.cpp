//Print numbers from n to 1 using for loop 

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter value of n : ";
    cin>>n;

    for(int i = n ; i > 0 ; i--){
        cout<<i<<" ";
    }
    return 0;
}