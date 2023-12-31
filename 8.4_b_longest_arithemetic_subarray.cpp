// longest arithmetic subarray 

// an arithmetic array is an array that contains at least two integers and the difference between consecutive intergrs are equal. for example,  [9,10],[3,3,3], and [9,7,5,3] are arithmetic arrays, while [1,3,3,,7], [2,1,2] and [1,2,4] are not arithemetic arrays.


// sarasvati has an array of N non-negative integers. the i-th integer of the array us A. she wants to choose a continguous arithmetic subarray from her array that has the maximum length. please help her to determine the length of the longest contiguous arithemetic subarray.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int ans = 2;
    int pd = a[1]-a[0]; // past difference
    int j=2;
    int curr =2;

    while(j<n){
        if(pd == a[j]-a[j-1]){
            curr++;
        }
        else{
            pd = a[j]-a[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }

    cout<<ans<<endl;
}