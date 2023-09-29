// isyana is goven the number of visitors at her local theme park on N consecutive days. the number of visitors on the i-th day is V^i. A day is record breaking if it satisfies both of the following conditions:

// 1) the number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
// 2) Either it is the day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.

// Note that the very first  day could be a record breaking day ! 
// Pleae help Isyna find  out the number of record breaking days.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n+1];
    a[n] =-1;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    if(n==1){
        cout <<"1"<<endl;
        return 0;
    }

    int ans =0;
    int mx=-1; 

    for(int i=0; i<n; i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx = max(mx, a[i]);
    }

    cout <<ans<<endl;

    return 0;
}