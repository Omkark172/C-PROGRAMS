//What will be the output of the following code 

#include<iostream>
using namespace std;

int main(){
   int a = 32;
   int *ptr = &a;

   char ch = 'A';
   char &cho = ch; //Reference variables

   cho += a; //cho (ch) = 'A' = 65 (ascii value) || 65 + 32 = 97 = 'a'
   *ptr += ch; // ch = 97 + 32 = 129
    cout<<a<<","<<ch<<endl; 

    return 0;
}