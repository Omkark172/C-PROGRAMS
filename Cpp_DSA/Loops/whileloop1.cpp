// Print the sum of digits of a number using while loop 


#include<iostream>
using namespace std;
int main(){
   int n = 10829;
   int digSum = 0;
   while(n > 0){ //while (n != 0)
    int lastDigit = n % 10;
    digSum += lastDigit;
    n = n / 10;
    
   
   }
   cout<<digSum<<endl;
   return 0;
}