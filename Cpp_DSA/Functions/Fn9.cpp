#include<iostream>
using namespace std;
//WAF TO PRINT IF A NUMBER IS ODD OR EVEN


bool isEven(int n){ //even -> true ; odd -> false
    return n%2 == 0;
}
int main(){
     
    cout<< isEven(4) <<endl; 
    cout<< isEven(5) <<endl; 
    return 0;
}