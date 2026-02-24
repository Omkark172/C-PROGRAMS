// Arrays are passed by Reference 
#include<iostream>
using namespace std;

void func(int arr[]){
    arr[0] = 100;
}

void func2(int *ptr){
    ptr[0] = 1000;   
}

void func3(int nonChangable){  // Call by value

    nonChangable = 10; // this will not change in main function
}

int main(){
    int a = 5; 
    int *ptr = &a;
    cout<< ptr<<endl; //0x... (address of a)
    cout<< *ptr<<endl; //5 (value of a)

    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    int nonChangable = 5;
    func3(nonChangable);   // Call by value
    cout<< nonChangable <<endl; //5

    cout<< *arr <<endl;       //arr[0]
    cout<<*(arr + 1) <<endl;  //arr[1]
    cout<<*(arr + 2) <<endl;  //arr[2]

    func(arr); // passing array name is equivalent to passing the pointer 
    cout<< arr[0] <<endl;
    func2(arr); 
    cout<< arr[0] <<endl;
    cout<< arr[0] <<endl; 




    return 0;
}