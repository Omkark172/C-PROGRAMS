//Decimal to Binary 

#include<iostream>
using namespace std;

void decToBin(int decNum){
    int n = decNum;
    int pow = 1; // 10^0 10^1 10^2 ...
    int binNum = 0;

    while(n > 0){
        int rem = n % 2;
        binNum = binNum + rem * pow;
        pow = pow * 10;
        n = n / 2;
    }
    cout<<"binary of "<<decNum<<" is = "<<binNum<<endl;


}


int main(){
    decToBin(7);
    return 0;
}