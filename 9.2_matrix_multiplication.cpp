// problem
// Given two 2-dimensional arrays of sizes n1*n2 and n2*n3. Your task is to multiplt these matrices and output the multiplied matrix.
// the first matrix row is always equal to the second row column
#include<iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    cin>>n1>>n2>>n3;

    int m1[n1][n2];
    int m2[n2][n3];

    // input for the first matrix
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            cin>>m1[i][j]; 
        }
    }

    // input for the second matrix
    for(int i=0; i<n2; i++){
        for(int j=0; j<n3; j++){
            cin>>m2[i][j]; 
        }
    }

    // make answer array to store multiplication
    int ans[n1][n3];

    // initialize the ans matrix by 0
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            ans[i][j]=0;
        }
    }

    // performing multiplication of two matrix
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            for(int k=0; k<n2; k++){
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // display the output matrix
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
