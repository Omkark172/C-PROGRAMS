#include<iostream>
using namespace std;

int main(){

    int arr[20] = {1,2,3,4,5,6};
    int *aptr = arr; //pointing to 1
    int *aptr2 = aptr +3; //pointing to 4
    cout<< *aptr2<<endl; // 4
    cout<< *aptr<<endl; // 1
    cout<< aptr2 - aptr<<endl; // 3 int can be stored in between


    int a =5;
    int *ptr1 = &a;
    int *ptr2 = ptr1 + 3;

    cout<< ptr2<<endl; 
    cout<< ptr1<<endl;
    cout<< ptr2 - ptr1<<endl; // 3 int can be stored in between  
    return 0;
}