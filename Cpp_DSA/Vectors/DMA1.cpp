#include<iostream>
using namespace std;

void funcInt(){
    int *ptr = new int; //dynamic memory allocation
    *ptr = 10;
    cout << *ptr << endl;
    delete ptr; //free
}

void funcArr(){
    int size;
    cin >> size;

    int *ptr = new int[size];

    int x = 1;
    for(int i=0 ; i<size ; i++){
        ptr[i] = x;
        cout << ptr[i] << " ";
        x++;
    }
    cout<<endl;

    delete [] ptr; //free
}

int main(){
    funcArr();

    funcInt();
    return 0;
}