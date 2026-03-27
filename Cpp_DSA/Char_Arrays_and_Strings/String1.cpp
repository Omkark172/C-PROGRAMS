#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Hello World";

    cout<<str.length()<<endl;
    cout<< str[4] << endl;
    cout<< str.at(4) << endl;

    string str2 = "helloworld";

    cout<< str2.substr(1,5) << endl;
    cout<< str2.substr(5,5) << endl;

    string str3 = "I love coding in c++ & c++. I don't like c++";

    cout<< str3.find("c++") << endl; // 1st occurence
    cout<< str3.find("c++" , 20) << endl; // 2nd occurence means after index 20 it will search 
    cout<< str3.find("c++" , 25) << endl; // 3rd occurence means after index 25 it will search
    cout << str3.find("Python")<<endl; // Gives value equivalent to -1
    int idx = str3.find("Python");
    cout << idx << endl;



    return 0;
}