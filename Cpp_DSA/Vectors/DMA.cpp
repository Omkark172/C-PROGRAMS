#include<iostream>
using namespace std;

void func(){
    int arr[100] = {1,2,3,4,5};
    for(int i=0 ; i<5 ; i++){
        cout << arr[i] << " ";
    }
    return;
}

int main(){
    func();
    // int arr[100] = {1,2,3,4,5};
    int size;
    cin >> size;

    int *arr = new int[size];
    // arr[0] => *(arr+0)
    // arr[1] => *(arr+1)
    // arr[2] => *(arr+2)

    int x = 1;
    for(int i=0 ; i<size ; i++){
        arr[i] = x;
        cout << arr[i] << " ";
        x++;
    }
    cout<<endl;


    return 0;
}