//Print the digits of a given number in reverse using while loop 
#include <iostream>
using namespace std;
int main(){
     int n = 18290;
   int digSum = 0;
   while(n > 0){ //while (n != 0)
    int lastDigit = n % 10;
    cout<<lastDigit;
    n = n / 10;
    
   
   }
   cout<<digSum<<endl;
   return 0;
}