#include<bits/stdc++.h>
using namespace std;

int main()
{  
 vector<int> arr ={102,4,100,101,3,2,2,1}; 
 sort(arr.begin(),arr.end()); 
 
 int n = arr.size(); 
 int large =1;  
 int count =1;
 
 for(int i=0;i<n-1;i++){  
     if(arr[i] == arr[i+1]){
       continue;
     }
     if(arr[i]+1 == arr[i+1]){
        count++;
     }else{ 
     count = 1;
      if(count>large){
       large = count;
     }
    }
    } 
    if(count>large){
       large = count;
     }
    
   cout<<large;
   
    return 0;
}