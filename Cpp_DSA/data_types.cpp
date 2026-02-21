#include<iostream>
#include<iomanip>
using namespace std;
int main(){
   int age = 19;
   int marks = 99;
   char grade = 'A';
   bool isAdult = true;
   float PI = 3.1459265359;
   double PI2 = 3.1459265359;

   cout<<"PI = "<<PI<<endl;
   cout<<"PI2 = "<<PI2<<endl;
   cout<<setprecision(12)<<"PI = "<<PI<<endl;
   cout<<setprecision(12)<<"PI2 = "<<PI2<<endl;

   cout<<age<<" "<<marks<<" "<<grade<<" "<<isAdult<<endl;
   cout<<"size of int = "<<sizeof(int)<<endl;
    cout<<"size of char = "<<sizeof(char)<<endl; 
    cout<<"size of bool = "<<sizeof(bool)<<endl;
    return 0;
}