#include<iostream>
using namespace std;

void printPairs(int *arr , int n){
    int totalPairs = 0;//(n*(n-1))/2
    for(int i = 0 ; i < n ; i++){
        int curr = arr[i];
        for(int j = i+1 ; j < n ; j++){
            cout<<"("<<curr<<","<<arr[j]<<")"<<endl;
            totalPairs++;
        }
        cout<<endl;
    }
    cout<<"Total Pairs : "<<totalPairs<<endl;
}

int main(){
    int arr[5] = {2,4,6,8,10};
    int n = sizeof(arr)/sizeof(int);
    printPairs(arr,n);
    return 0;
}