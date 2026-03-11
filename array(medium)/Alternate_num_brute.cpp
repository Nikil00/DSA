#include<bits/stdc++.h>
using namespace std;

// Rearrange Array Elements by Sign
// TIME COMPLEXITY = O(N+N/2)
//SPACE COMPLEXITY = O(N/2+N/2) = O(N) 


int main()
{  
vector<int> arr = {5,-1,-3,2,4,-6};
 vector<int>pos; 
 vector<int>neg; 
 
 for(int i=0;i<arr.size();i++){
   if(arr[i]>0){
     pos.push_back(arr[i]);
   }else{
     neg.push_back(arr[i]);
   }
 }  
 int i=0;
 while(i<pos.size()){
    arr[i*2] = pos[i];  
   arr[i*2+1] = neg[i];
   i++;
 } 
 
 for(int i=0;i<arr.size();i++){
   cout<<arr[i]<<"\n";
 }
    return 0;
}