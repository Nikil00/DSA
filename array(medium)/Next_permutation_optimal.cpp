#include<bits/stdc++.h>
using namespace std;

// Rearrange Array Elements by Sign
// TIME COMPLEXITY = O(N)
//SPACE COMPLEXITY = O(N) 



int main()
{  

vector<int> arr={2,1,5,4,3,0,0}; 
int index = -1;
int n = arr.size();

for(int i=n-1;i>0;i--){
  if(arr[i]>arr[i-1]){
    index = i-1; 
     break;
  }
}  
 
 if(index == -1){
  reverse(arr.begin(),arr.end());
  //break;
 }else{
 for(int i=n-1;i>index;i--){
    if(arr[i]>arr[index]){
       int temp = arr[i];
       arr[i] = arr[index];
       arr[index] = temp;
    }
 }
 
reverse(arr.begin()+ index+1,arr.end());  
 }
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
  return 0;
 } 