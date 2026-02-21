#include<iostream>
using namespace std;
int main(){
    float eng;
    float sci;
    float math;
     cout<<"Enter marks of English:";
     cin>>eng;
        cout<<"Enter marks of Science:";
        cin>>sci;
        cout<<"Enter marks of Math:";
        cin>>math;
        float avg = (eng + sci + math) / 3;
        cout<<"Average marks = "<<avg<<endl;
    return 0;
}