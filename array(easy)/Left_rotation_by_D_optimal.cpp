#include<iostream>
using namespace std;

void reverse (int arr[],int start,int end){
for(int i=start;i<end;i++)
  {
   int temp = arr[i];
   arr[i] = arr[end-1];
   arr[end-1] = temp;
    end--;
  }
}

int main()
{ 
cout<<"enter size & values : ";
  int n;
  cin>>n; 
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }  
  cout<<"enter D :";
  int d;
  cin>>d;
  d=d%n; 
  reverse(arr,0,d);
  reverse(arr,d,n);
  reverse(arr,0,n);
  for(int j=0;j<n;j++){
   cout<<arr[j]<<"\n";
  }
    return 0;
}