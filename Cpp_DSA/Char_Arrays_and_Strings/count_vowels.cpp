#include<iostream>
#include<string>
using namespace std;

void countVowels(string str){
    int count = 0;
    for(int i=0 ; i<str.length() ; i++){
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            count++;
        }
    }
    cout << "Number of vowels in the string: " << count << endl;
}

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    countVowels(str);


    return 0;
}