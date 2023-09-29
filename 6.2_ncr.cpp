#include <iostream>
#include <cmath>

using namespace std;

int fact(int num){
    int factorial=1;
    for(int i=2;i<=num;i++){
        factorial=factorial*i;
    }
    return factorial;
    
}

int main()
{
    int n,r;
    cout<<"Enter the value for n : ";
    cin>>n;
    cout<<"Enter the value for r : ";
    cin>>r;
    
    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
}





