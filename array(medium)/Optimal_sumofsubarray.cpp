#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {1,10,1,6,8,0};
    int n=6;
    int sum = 0;
    int start = 0;
    int beststart=0;
    int bestEnd = 0;
    int Maxi = INT_MIN;
    for(int i=0; i<n; i++) {
        if(sum == 0) {
            start = i ;
        }
        sum = sum + arr[i];
        if(sum > Maxi) {
            beststart = start;
            bestEnd = i;
            Maxi = max(Maxi, sum);
        }
        if(sum<0) {
            sum =0;
        }
    }
    cout<<"[";
    for(int i=beststart; i<=bestEnd; i++) {
        cout<<arr[i]<<",";
    }
    cout<<"]";
    cout<<Maxi;
    return 0;
}