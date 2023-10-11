// matrix transpose 

// problem:
// given a square matrix A and its number if rows (or columns) N, return the transpose of A. The transpose of a matrix is the matrix flippes over its main diagonal, swtiching the row and column indices of the matrix.

#include<iostream>
using namespace std;
int main(){
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    cout<<"Before Transpose : ";
    for(int i=0; i<3; i++){
        cout<<endl;
        for(int j=0; j<3; j++){
            cout<<A[i][j] << " ";
        }
    }


    for(int i=0; i<3; i++){
        for(int j=i; j<3; j++){
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
    cout<<endl;
    cout<<"After Transpose : ";
    for(int i=0; i<3; i++){
        cout<<endl;
        for(int j=0; j<3; j++){
            cout<<A[i][j] << " ";
        }
    }

    return 0;
}

