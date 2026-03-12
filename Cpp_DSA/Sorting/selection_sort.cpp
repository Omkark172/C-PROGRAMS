#include<iostream>
using namespace std;

void printArray(int arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[] , int n){
    //O(n^2)
    for(int i = 0 ; i<n-1 ; i++){
        int min =i; //Minimum Index
        for(int j = i+1 ; j<n ; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i] , arr[min]);
    }

    
}


int main(){
    int arr[5] = {5,2,3,1,4};

    selectionSort(arr , 5);
    printArray(arr , 5);

    return 0;
}