#include<bits/stdc++.h>
using namespace std;

int main()
{  
  vector<int> a = {2,1,3,4};
  int k = 3;
 map<long long,int>hashTable;
 long long sum = 0;
 int maxLen =  0;
 for(int i=0;i<a.size();i++) {
    sum = sum+a[i]; 
  if(sum == k) { 
     maxLen = i+1;
  } 
  
  if(hashTable.find(sum-k)==hashTable.end()){
      hashTable[sum] = i;
  } 
  if(hashTable.find(sum-k)!=hashTable.end()){
         int length = i - hashTable[sum-k];
         if(length>maxLen){
            maxLen = length;
         }
  }
 }
 cout<<maxLen;
    return 0;
}