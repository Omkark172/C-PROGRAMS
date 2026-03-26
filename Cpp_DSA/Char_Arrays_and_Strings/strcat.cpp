#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[50] = "Hello";
    char str2[50] = "World";

    strcat(str1 , str2);

    cout<<str1 << endl;
    cout<<str2 << endl;


    return 0;
}