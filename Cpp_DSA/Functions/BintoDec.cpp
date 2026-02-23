//Binary to Decimal 
#include<iostream>
using namespace std;

void binToDec(int binNum){
    int n = binNum;
    int decNum = 0;
    int lastDigit;
    int pow = 1; // 2^0 2^1 2^2 ...

    while (n>0){
        lastDigit = n % 10;
        decNum = decNum + lastDigit * pow;
        pow = pow * 2;
        n = n /  10;

    }
    cout<<decNum<<endl;

}



int main(){
    binToDec(101);
    return 0;
}

// //Decimal to Binary 

// #include<iostream>
// using namespace std;

// void decToBin(int decNum){
//     int n = decNum;
//     int pow = 1; // 10^0 10^1 10^2 ...
//     int binNum = 0;

//     while(n > 0){
//         int rem = n % 2;
//         binNum = binNum + rem * pow;
//         pow = pow * 10;
//         n = n / 2;
//     }
//     cout<<"binary of "<<decNum<<" is = "<<binNum<<endl;


// }


// int main(){
//     decToBin(7);
//     return 0;
// }
