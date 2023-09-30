
#include <iostream>

using namespace std;

int main()
{
    int row,column;
    cout << "Enter the number of rows and columns : ";
    cin>>row>>column;
    int arr[row][column];
    
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"The matrix is : " << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int x;
    cin>>x;
    bool flag = false;
    
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(arr[i][j]==x){
                cout<<"At position :"<<i<<" "<<j<< endl;
                flag=true;
            }
            
        }
        
    }
    
    if(flag){
        cout<<"Element is found ! ";
    }
    else{
        cout<<"Element is not found !";
    }
    
    return 0;
}