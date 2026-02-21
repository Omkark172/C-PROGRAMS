#include<iostream>
using namespace std;
int main(){
    float pencil,pen,eraser;
    cout<<"Enter the cost of pencil:";
    cin>>pencil;
    cout<<"Enter the cost of pen:";
    cin>>pen;
    cout<<"Enter the cost of eraser:";
    cin>>eraser;
    float totalCost = (pencil + pen + eraser) * 18/100 ;
    float finalCost = pencil + pen + eraser + totalCost;
    cout<<"Final cost = "<<finalCost<<endl;
    return 0;
}