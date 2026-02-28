#include<iostream>
#include <climits>
using namespace std;

void maxSumSubarray(int *arr , int n){
    int maxSum = INT_MIN; 
    for(int start = 0 ; start < n ; start++){
        int currSum = 0;
        for(int end = start ; end < n ; end++){
           // cout << "(" << start << "," << end << ")
            for(int i = start ; i <= end ; i++){
                currSum += arr[i];
            }
            cout << currSum << ", ";
            maxSum = max(maxSum , currSum); // In cpp header max their is a function called max 
        }
        cout<<endl;
    }
    cout << "Maximum sum is =" << maxSum << endl;
}

int main(){
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxSumSubarray(arr,n);
    return 0;
}