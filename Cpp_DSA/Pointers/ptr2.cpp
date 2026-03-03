//Pointers

#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    cout<<&a<<" = "<<ptr<<"\n";
    cout<<*ptr<<endl;


    float pi = 3.14;
    float *ptr2 = &pi;
    cout<<&pi<<" = "<<ptr2<<"\n";
    cout<<*ptr2<<endl;

    cout<<"size of pointer is = "<<sizeof(ptr)<<"Bytes"<<endl;
    cout<<sizeof(ptr2)<<endl;

    int c = 15;
    int *Ptr = &c;

    int **Pptr = &Ptr;
    cout<<&Ptr<<" = "<<Pptr<<endl;





    return 0;
}