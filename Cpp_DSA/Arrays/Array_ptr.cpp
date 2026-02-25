//Array pointer acts like a const pointer to the first element of the array. It cannot be changed to point to another location, but the elements of the array can be modified through it.
#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<arr<<endl; //0x... (address of the first element of the array)
    cout<<*arr<<endl; //0 (value of the first element of the array

    int y = 25;

    // arr = &y; // This is supposed to be a constant value this cannot be changed this will always point to arrays 0th element 

    // Arrays name is treated as a constant pointer it is a read only value we cannot overwrite the value 
    return 0;
}