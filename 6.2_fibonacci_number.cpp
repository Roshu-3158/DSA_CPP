#include <iostream>
#include <cmath>

using namespace std;

void fib(int num){
    int t1=0;
    int t2=1;
    int next_term;
    
    for(int i=1; i<=num; i++){
        cout<<t1<<" ";
        next_term=t1+t2;
        t1=t2;
        t2=next_term;
    }
    return;
}

int main()
{
    int num;
    cout<<"Enter the starting : ";
    cin>>num;
    
    fib(num);
    return 0;
}