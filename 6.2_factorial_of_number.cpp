#include <iostream>
#include <cmath>

using namespace std;

int facto(int num){
    int factorial=1;
    for(int i=2;i<=num;i++){
        factorial=factorial*i;
    }
    return factorial;
}

int main()
{
    int num;
    cout<<"Enter the starting : ";
    cin>>num;
    
    int ans = facto(num);
    cout<<ans<<endl;
}