#include<iostream>
using namespace std;

int main(){
    // long long int x = 15; No need to wrie int here bcoz if we write only long long the compiler implicitely converts into long long int 
    long long x = 15;

    cout<<sizeof( int)<<endl;
    cout<<sizeof(short int)<<endl;
    cout<<sizeof(long long int)<<endl;  
   
    return 0;
}