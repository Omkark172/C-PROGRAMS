//Brute Force Approach

#include<iostream>
using namespace std;

//Time complexity - O(n*m)
int searchinSortedMatrix(int mat[][4] , int n , int m , int key){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(mat[i][j] == key){
                cout << "Found at (" << i << "," << j << ")"<<endl;
                return 1;
            }
        }
    }
    return -1;
    
}

int main(){
    int matrix[4][4] = {{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};
    int key;
    cout<<"Enter key to be searched =";
    cin>>key;

    cout<<searchinSortedMatrix(matrix , 4 , 4 , key);


    return 0;
}