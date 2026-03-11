#include<bits/stdc++.h>
using namespace std;

// Rearrange Array Elements by Sign
// TIME COMPLEXITY = O(N)
//SPACE COMPLEXITY = O(N) 



int main()
{  
vector<int> arr = {5,-1,-3,2,4,-6};
 vector<int> temp(arr.size(), 0);
  int posIndex = 0;
  int negIndex = 1; 
  int i=0;
  while(i<arr.size()){
    if(arr[i]>0){ 
     temp[posIndex] = arr[i];
      posIndex = posIndex+2;
    } 
    else{
    temp[negIndex] = arr[i];
    negIndex = negIndex+2;
    }
    i++;
 }
 for(int i=0;i<temp.size();i++){
   cout<<temp[i]<<"\n";
 }
    return 0;
}