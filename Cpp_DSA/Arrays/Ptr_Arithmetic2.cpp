#include<iostream>
using namespace std;

void printArr(int *ptr , int n){
    for(int i = 0; i < n; i++){
        cout<< *ptr << "\n"; // Also write *(ptr + i)
        ptr = ptr + 1;
    }
    cout<< endl;
}

int main(){
    int a = 5;
    int *ptr = &a;
    cout<< ptr <<endl;
    ptr = ptr +3;
    cout<< ptr <<endl; // 3 int ++
    cout<< (ptr - 3) <<endl; 

    //Output will be in hexadecimal 04 05 06 07 08 09 0a 0b 0c 0d 0e 0f 10



    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    printArr(arr, n);

    
    return 0;
}