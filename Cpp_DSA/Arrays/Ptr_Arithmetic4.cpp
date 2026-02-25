#include<iostream>
using namespace std;

int main(){

    int arr[20] = {1,2,3,4,5,6};
    int *aptr = arr; //pointing to 1
    int *aptr2 = aptr +3; //pointing to 4
    
    cout<< (aptr2 > aptr)<<endl; //yes : true : 1
    cout<< (aptr2 < aptr)<<endl; //no : false : 0
    cout<< (aptr == arr)<<endl; //yes : true : 1

    return 0;
}