#include<iostream>
using namespace std;

int main(){
    char ch1 = 'a';
    char ch2 = 'X';
    char ch3 = '$';
    char ch4 = '9';
    char ch5 = '\n'; //next line char -> \n 

    char ch = 'a';
    cout << (int) ch <<endl;

    char ch6 = 'f';
    int pos = ch6 - 'a';
    cout<< pos <<endl;

    char ch7 = 'F'; 
    int pos2 = ch7 - 'A'; // to find position 
    cout<< pos2 <<endl;




    return 0;
}