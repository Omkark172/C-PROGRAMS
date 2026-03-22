#include<iostream>
using namespace std;

//Sort array of characters using insertion sort in descending order

void printArr(char arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortChar(char arr[] , int n ){
    //Time Comp - O(n^2)
    for(int i = 1 ; i < n ; i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] < curr){
            arr[prev+1] = arr[prev]; // Cpp inbuilt swap function swap(arr[prev] , arr[prev+1]);
            prev--;
        }

        arr[prev+1] = curr;
    }
}

int main(){
    char ch[6] = {'f' , 'b' , 'a' , 'e' , 'c' , 'd'};

    sortChar(ch , 6);
    printArr(ch , 6);


    return 0;
}