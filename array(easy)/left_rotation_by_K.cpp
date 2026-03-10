#include<iostream>
using namespace std; 

void rotateLeft (int arr[],int n, int d){ 
 d=d%n;
 int temp[d];
 for(int i=0;i<d;i++){
   temp[i] = arr[i];
 }  
 
 for(int i=0;i<d;i++){
     cout<<"Temp"<<temp[i]<<"\n";
 }
 for(int i=d;i<n;i++){
   arr[i-d] = arr[i];
 }
 
 for(int i=0;i<n;i++){
     cout<<"updated Array"<<arr[i]<<"\n";
 }
 
 
 for(int i=n-d;i<n;i++){
   arr[i] = temp[i-(n-d)];
 }
}

int main()
{ 
 cout<<"enter Length of array & values : ";
 int n; 
 cin>>n;
 int arr[n]; 
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }  
 int d;
 cout<<"Enter D value"; 
 cin>>d;
 rotateLeft(arr,n,d);
 for(int i=0;i<n;i++) {
    cout<<arr[i]<<"\n";
 }
    return 0;
}