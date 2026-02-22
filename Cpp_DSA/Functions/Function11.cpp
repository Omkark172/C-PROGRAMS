//Scope of a variable ; Local Variable 

#include <iostream>
using namespace std;

void sum(int a , int b){
    {
        int  x = 25;
        cout<< x;
    }
    if(a>=1){
            int x = 50;
            cout<< x;
    }

    int s = a+b;
    cout<< s;
}

int main(){
    sum(10,20);
    int s = 10;
    cout<< s;

    return 0;
}