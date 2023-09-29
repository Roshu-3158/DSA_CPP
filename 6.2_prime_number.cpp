#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if((num/2)*2==num){
            return false;
        }
    }
    return true;
}

int main()
{
    int num1,num2;
    cout<<"Enter the starting number : ";
    cin>>num1;
    
    cout<<"Enter the starting number : ";
    cin>>num2;

    for(int i=num1;i<=num2;i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}