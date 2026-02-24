//REVERSE AN ARRAY WITH EXTRA SPACE


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
    int copyArr[n];

    for(int i = 0 ; i< n ; i++){
        int j = n-i-1;
        copyArr[i] = arr[j];
    }

    for(int i = 0 ; i< n ; i++){
        arr[i] = copyArr[i];
    }


   
    printArr(arr,n);
    return 0;
}