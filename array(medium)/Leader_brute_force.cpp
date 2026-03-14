#include<bits/stdc++.h>
using namespace std; 
//TC-o(n²)
//SC -O(N)


int main() { 
vector<int> arr = {7, 10, 4, 10, 6, 5, 2};
  
  for(int i=0;i<arr.size();i++){  
  int Exist = true; 
  int Leader = arr[i];
    for(int j=i+1;j<arr.size() ;j++){
       if(arr[j]>arr[i]){ 
         Exist = false;
          break;
       }
    }   
    if(Exist==true) {
    cout<<Leader<<"\n";
    }
  }
    return 0;
}