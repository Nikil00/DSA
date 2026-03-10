#include<iostream>
using namespace std;

int main()
{  
 int arr[5] ={2,4,6,1,5}; 
 int n = 5;
 int num = arr[0]; 
 
 for(int i=0;i<n;i++){
    arr[i] = arr[i+1];
 }  
 arr[n-1] = num;
 
 for(int j=0;j<n;j++){
  cout<<arr[j]<<"\n";
 }
    return 0;
}