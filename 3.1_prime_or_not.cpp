// chake the given number is prime or not 

#include<iostream>
using namespace std;

int main(){
    int num,i;
    cout<<"Enter a Number: ";
    cin >> num;

    for(i=2; i<num; i++){
        if(num%i==0){
            cout << "Not Prime" << endl;
            break;
        }
    }
    if(i==num){
        cout << "Prime Number" << endl;
      
    }
    return 0;

}