#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1;
    cout << vec1.size() << "\n";

    vector<int> vec2 = {1, 2, 3, 4, 5};
    cout << vec2.size() << "\n";

    vector<int> vec3(10, -1); // 10 elements with value -1
    cout << vec3.size() << "\n";

    return 0;
}