#include<bits/stdc++.h>
using namespace std;

int main()
{  
 vector<int> arr ={102,4,100,101,3,2,2,1}; 
  set<int> set;
  int large = 1;
  for(int i=0;i<arr.size();i++){
      set.insert(arr[i]);
  }
   
  for(auto it : set){
   if(set.find(it-1) == set.end()){
      int x = it;
     int count = 1;
   
   while(set.find(x+1)!=set.end()){
       count = count +1;
       x =x+1;
  }  
   if(count > large){
     large = count;
   }
  }
 }   
  cout<<large;
    return 0;
}