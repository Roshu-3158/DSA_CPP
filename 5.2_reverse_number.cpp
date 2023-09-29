#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int sum = 0;
    int original = num;

    while (num>0) {
        int lastdigit = num%10;
        sum += pow(lastdigit,3);
        num=num/10;
    }
    if(sum==original){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not a Armstrong number";
    }
}