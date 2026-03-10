#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {-2, -3, -7, -2, -10, -4};
//int arr[3] ={2,3,5};

    int n = 6;
    
    int maxi=INT_MIN;
    for(int i=0; i<n; i++) {
        int sum = 0;
        for(int j=i; j<n; j++) {
            sum = sum+arr[j];
            if(sum>maxi) {
              maxi = max(maxi,sum) ;
          }
    } 
        cout<<maxi;
        return 0;
     }
    }