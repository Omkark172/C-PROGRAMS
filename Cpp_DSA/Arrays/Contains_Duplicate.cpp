//https://leetcode.com/problems/contains-duplicate/description/
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

// Example 1:

// Input: nums = [1,2,3,1]

// Output: true

// Explanation:

// The element 1 occurs at the indices 0 and 3.

// Example 2:

// Input: nums = [1,2,3,4]

// Output: false

// Explanation:

// All elements are distinct.

// Example 3:

// Input: nums = [1,1,1,3,3,4,3,2,4,2]

// Output: true

#include<iostream>
using namespace std;
bool containsDuplicate(int *arr , int n){
    int curr = 0;
    for(int i = 0 ; i<n ; i++){
        curr = arr[i];
        for(int j = i+1 ; j<n ; j++){
            if(curr == arr[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[10] = {1,1,1,3,3,4,3,2,4,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<containsDuplicate(arr,n)<<endl;
    return 0;
}

//Time complexity : O(n^2) as we are using two loops