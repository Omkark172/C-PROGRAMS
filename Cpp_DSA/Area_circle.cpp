#include<iostream>
#define PI 3.14
using namespace std;
int main(){
    float radius;
    cout<<"Enter the radius of circle: ";
    cin>>radius;
    float area = PI * radius * radius;
    cout<<"Area of circle = "<<area<<endl;
    return 0;
}