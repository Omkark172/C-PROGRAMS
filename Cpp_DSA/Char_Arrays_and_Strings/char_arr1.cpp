#include<iostream>
#include <cstring>
using namespace std;

int main(){
    // char word[30];
    // cin >> word; // ignores whitespaces 

    // cout<<"word is : "<< word <<endl;
    // cout << "length : "<< strlen(word) <<endl;

    char sentence[30];
    cin.getline(sentence , 30 ,'*'); // as soon as you enter * after this everything will be terminated 

    cout<<"sentence is : "<< sentence <<endl;
    cout << "length : "<< strlen(sentence) <<endl;


    return 0;
}