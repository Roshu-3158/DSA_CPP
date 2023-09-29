#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;

    int counter = 0;
    for(int i=2; i<num; i++){
        if(num%i==0){
            cout<<"Not a Prime Number";
            counter = 1;
            break;
        }
    }
    if(counter==0){
    cout<<"Prime Number";
    }
}