// Staircase Search

#include<iostream>
using namespace std;

//Time complexity - O(n+m)
int searchinSortedMatrix(int mat[][4] , int n , int m , int key){
    int i=0 , j = m-1;
    while(i < n && j>=0){
        if(mat[i][j] == key){
            cout<<"found at cell ("<<i<<","<<j<<")\n";
            return true;
        }else if(mat[i][j] > key){
            //left
            j--;
        }else{
            //down
            i++;
        }
    }
    cout<<" key not found\n";
    return -1;
    
}

// int searchinSortedMatrix2(int mat[][4] , int n , int m , int key){
//     int i=n-1 , j = 0;
//     while(i < n && j>=0){
//         if(mat[i][j] == key){
//             cout<<"found at cell ("<<i<<","<<j<<")\n";
//             return true;
//         }else if(mat[i][j] < key){
//             //right
//             j++;
//         }else{
//             //top
//             i--;
//         }
//     }
//     cout<<" key not found\n";
//     return -1;
    
// }

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