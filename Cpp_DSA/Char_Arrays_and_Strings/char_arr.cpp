#include<iostream>
#include <cstring>
using namespace std;


int main(){
    char str[5] = {'a' , 'b' , 'c' , 'd' , 'e'};

    cout << str[0] << endl;
    cout << str[1] << endl;
    cout << str[2] << endl;
    cout << str[3] << endl;
    cout << str[4] << endl;

    char arr[5] = {'c' , 'o' , 'd' , 'e' , '\0'};
    cout<<strlen(arr) <<endl;
    cout<< arr<<endl;

   // "hello world " String Literals
    // "a" String Literals
    char work[] = "coding";
    cout<<strlen(work) <<endl;
    cout << work <<endl;
    

    return 0;
}