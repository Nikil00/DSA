#include<iostream>
using namespace std;

int main()
{ 
 int arr[4] = {1,2,3,5}; 
 int n=5; 
 
 for(int i=1;i<n;i++){ 
      int flag =0;
     for(int j=0;j<n-1;j++){
       if(arr[j]==i){ 
        flag= 1;
         break;
       }
     } 
     if(flag == 0) {
     cout<<i;
    }
 }
    return 0; 
}