#include<iostream>
using namespace std;

int binSearch(int *arr , int n , int key){
    int st = 0 , end = n-1;
    while(st <= end){
        int mid = (st + end) / 2; 
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){ //2nd half
            st = mid + 1;
        }
        else{ // 1st half
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    int n ;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array in sorted order : ";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key to be searched : ";
    cin>>key;
    int index = binSearch(arr,n,key);
    if(index == -1){
        cout<<"Key not found in the array"<<endl;
    }
    else{
        cout<<"Key found at index : "<<index + 1<<endl;
    }
}