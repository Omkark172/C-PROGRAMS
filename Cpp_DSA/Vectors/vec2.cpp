#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4};
    cout << "size : " << vec.size() << "\n";
    cout << "capacity : " << vec.capacity() << "\n";


    vec.push_back(5);
    cout << "size : " << vec.size() << "\n"; //5
    cout << "capacity : " << vec.capacity() << "\n"; //8

    vector<int> vec1;
    cout << "size : " << vec1.size() << "\n";
    cout << "capacity : " << vec1.capacity() << "\n";


    vec1.push_back(5);
    cout << "size : " << vec1.size() << "\n"; 
    cout << "capacity : " << vec1.capacity() << "\n";

    vec1.pop_back(); //capacity remains same just size is changed
    cout << "size : " << vec1.size() << "\n"; 
    cout << "capacity : " << vec1.capacity() << "\n"; 

    return 0;
}
    
