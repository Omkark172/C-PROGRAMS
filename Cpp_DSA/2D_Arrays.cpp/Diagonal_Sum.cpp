#include<iostream>
using namespace std;

int diagonalSum(int matrix[][3] , int n){

    int sum = 0;


    //Time comp - O(N^2)
    for(int i =0 ; i<n ; i++){ //rows
        for(int j =0 ; j<n ; j++){ //cols
            if(i==j){
                sum+= matrix[i][j];
            }else if(j== n-i-1){ //for odd n middle element repeat nai honar mhanun else if lavla karan middle element chi i aani j chi value donhi condition satisfy karte 3x3 matrix sathi
                sum+= matrix[i][j];
            }
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

    diagonalSum(matrix2 , 3);


    return 0;
}