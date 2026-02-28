#include<iostream>
#include <climits>
using namespace std;

// void maxSumSubarray(int *arr , int n){
//     int maxSum = INT_MIN; 
//     for(int start = 0 ; start < n ; start++){
//         for(int end = start ; end < n ; end++){
//              int currSum = 0;
//            // cout << "(" << start << "," << end << ")
//             for(int i = start ; i <= end ; i++){
//                 currSum += arr[i];
//             }
//             cout << currSum << ",";
//             maxSum = max(maxSum , currSum); // In cpp header max their is a function called max 
//         }
//         cout<<endl;
//     }
//     cout << "Maximum sum is =" << maxSum << endl;
// }

// void maxSumSubarray2(int *arr , int n){
//     int maxSum = INT_MIN; 
//     for(int start = 0 ; start < n ; start++){ //start = 2
//         int currSum = 0;
//         for(int end = start ; end < n ; end++){ // end = 2,3,4,5
//             currSum += arr[end];
//             maxSum = max(maxSum , currSum); // In cpp header max their is a function called max 
//         }
//     }
//     cout << "Maximum subarray sum is =" << maxSum << endl;
// }

void maxSumSubarray3(int *arr , int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for ( int i = 0 ; i < n ; i++){
        currSum += arr[i];
        maxSum = max(maxSum , currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
     cout << "Maximum subarray sum is =" << maxSum << endl;
}

int main(){
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxSumSubarray3(arr,n);
    return 0;
}