#include<bits/stdc++.h>
using namespace std;

int main()
{  
 vector<int> arr ={102,4,100,101,3,2,1};
 int n = arr.size();
 int large =1;
 for(int i=0;i<n;i++){ 
     int boolean = true;
     int num = arr[i];
     int count = 1;
   while(boolean){ 
    
    for(int j=0;j<n;j++){ 
        boolean = false;
      if(arr[j] == num+1){ 
          boolean = true; 
          break;
        }
      } 
      if(boolean){
        num = num +1;
        count= count +1; 
        
      }else{
        boolean = false;
      }  
      if(count > large){
        large = count;
      }
    }  
 }
   cout<<large;
    return 0;
}