#include<iostream>
using namespace std;

int diagonalSum(int matrix[][4] , int n){

    int sum = 0;


    //Time comp - O(N)
    for(int i =0 ; i<n ; i++){ 
        sum += matrix[i][i]; //primary diagonal
        if(i != n-i-1){ // i ki value j ke value ke equal nahi hai 
            sum+= matrix[i][n-i-1]; //secondary diagonal
        }
        
    }
    cout<<"sum ="<<sum<<endl;
    return sum;
}



int main(){
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};

    int matrix2[3][3]={{1,2,3},
                        {4,5,6},
                        {7,8,9}};

    diagonalSum(matrix , 4);


    return 0;
}