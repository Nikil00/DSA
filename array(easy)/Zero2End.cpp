#include<bits/stdc++.h>
using namespace std;

int main()
{ 
  int arr[10] = {1,0,2,3,2,0,0,4,5,1}; 
  int n=10;
  vector<int> temp;
  for(int i=0;i<n;i++){
    if(arr[i]!=0){
     temp.push_back(arr[i]);
    }
  }  
  int size = temp.size();
  for(int i=0;i<size;i++){ 
     arr[i] = temp[i];
  }  
 
  for(int i=size;i<n;i++){
      arr[i]=0;
  } 
  
  for(int i=0;i<n;i++){
    cout<<arr[i]<<"\n";
  }
    return 0;
}