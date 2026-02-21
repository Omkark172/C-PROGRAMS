//Reverse a given number and print the result  
#include <iostream>
using namespace std;
int main(){
    int res = 0;
     int n = 10829;
   
   while(n > 0){ //while (n != 0)
    int lastDigit = n % 10;
    res = res * 10 + lastDigit;
    n = n / 10;
    
   
   }
   cout<<res<<endl;
   return 0;
}