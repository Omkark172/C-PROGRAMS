//For a positive N , WAP that prints all the first N Fibonacci numbers. (Assume N>=2)
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n : Greater than or equal to 2 : ";
    cin>>n;
    int first = 0, second = 1, next;
    for(int i = 1;i<=n;i++){
        next = first + second;
        cout<<first<<" ";
        first = second;
        second = next;
    }
    

    return 0;
}
