//REVERSE AN ARRAY WITHOUT EXTRA SPACE
#include<iostream>
using namespace std;

void printArr(int *arr , int n){
    for(int i =0; i<n ; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    //My logic 

    for(int i = 0 , j = n-1; i< n/2 ; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    //Another logic
    int start = 0 , end = n-1;
    while(start < end){
        int temp = arr[start]; // swap(arr[start] , arr[end]) Inbuilt function in Cpp to swap two elements 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printArr(arr,n);
    return 0;
}