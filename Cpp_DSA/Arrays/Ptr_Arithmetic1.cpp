#include<iostream>
using namespace std;

int main(){
    char ch = 'a';
    char *cptr = &ch;

    cout<< cptr <<endl; 
    // cptr++;  // 1 char ++
    cout<< cptr <<endl; 

    int b = 5;
    int *ptr = &b;
    cout<< ptr <<endl;
    ptr++;
    cout<< ptr <<endl;
    ptr--;
    cout<< ptr <<endl;


    int a = 10;
    int *aptr = &a;
    cout<< aptr <<endl; 
    aptr++;  // 1 int ++
    cout<< aptr <<endl; 

    return 0;
}