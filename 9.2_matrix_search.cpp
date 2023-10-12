// most imp
// 2D Matrix Search
// Given a n*m matrix. Write an algorithm to fond the given value exists in the matrix or not.
// Integers in each row are sorted inascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of rows and columns of matrix : ";
    cin>>n>>m;

    int target;
    cout<<"Enter the elemnt which you wants to find in matrix : ";
    cin>>target;

    int mat[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }

    int r=0,c= m-1; 
    bool found=false;
    while(r < n and c>=0 ){
        if(mat[r][c]==target){
            found = true;
        }
        if(mat[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"Element Found";
    }
    else{
        cout<<"Element does not exists";
    }


}