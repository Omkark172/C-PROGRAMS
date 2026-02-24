//Largest in array 

#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter lenth of array: ";
    cin>>n;
    int arr[n];
    // int n = sizeof(arr) / sizeof(int);

    for(int i =0 ; i < n; i++){
    cin>>arr[i];
}

    int max = arr[0];
    for(int i =1 ; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }

}
cout<<"Largest = "<<max<<endl;
    return 0;
   
}