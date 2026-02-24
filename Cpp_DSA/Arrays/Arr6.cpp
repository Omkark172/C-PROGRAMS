#include<iostream>
using namespace std;

void printArr(int nums[0]){ // Nums is pointer it is not actual array so when we are calculating size it was printing size of pointer and not the size of array

    cout << sizeof(nums) << endl; // this will print the size of the pointer and not the size of the array because we are passing the pointer to the function
    // int n = sizeof(nums) / sizeof(int);
    // for(int i =0; i<n ; i++){
    //     cout<< nums[i]<<" ";
    // }
    // cout<<endl;
}

void printArr2(int nums[0] , int n){

   
    for(int i =0; i<n ; i++){
        cout<< nums[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    cout<<"array size = " << sizeof(arr) << endl;
    printArr2(arr , n); // this will not work as expected because we are passing the pointer to the function and the size of the array is not known in the function
    return 0;
}