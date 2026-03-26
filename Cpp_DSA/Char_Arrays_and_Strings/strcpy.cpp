#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[50];
    char str2[50] = "Hello World";

    strcpy(str1 , str2);

    cout<<str1 << endl;


    return 0;
}