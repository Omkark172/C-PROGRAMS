#include<iostream>
using namespace std;

int main(){
    int marks[5] = {10, 20, 30, 40, 50};
    int mark[] = {1,2,3};
    int arr[50]; // Garbage values

    cout<<sizeof(marks) / sizeof(int)<<endl; // Length of array

    int n = sizeof(marks) / sizeof(int); // Length of array 
    cout<<"Length of array is: "<<n<<endl;
    cout<<sizeof(marks)<<endl; // Size of array
    return 0;
}