//Print the sum of odd digits in a number using while loop 
#include <iostream>
using namespace std;
int main(){
     int n = 18290;
   int digSum = 0;
   while(n > 0){ //while (n != 0)
    int lastDigit = n % 10;
    if (lastDigit % 2 != 0){ //if (lastDigit % 2 == 1)
    digSum += lastDigit;
    }
    n = n / 10;
    
   
   }
   cout<<digSum<<endl;
   return 0;
}