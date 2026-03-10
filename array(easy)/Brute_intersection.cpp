#include<bits/stdc++.h>
using namespace std;

int main()
{ 
 vector<int> Inter;
 int a[8] ={1,2,2,3,3,4,5,6};
  int n1=8;
  int  n2=7;
  int b[7]={2,3,3,5,6,6,7};
  int visited[7] = {0};
    
    
    for(int i=0;i<n1;i++){
     for(int j=0;j<n2;j++){
       if(a[i] == b[j] && visited[j]==0){
           Inter.push_back(a[i]);
           visited[j] = 1;
           break;
       } 
       if(b[j] > a[i]){
         break;
       }
     }
    }
    
    for(int i=0;i<Inter.size();i++){
        cout<<Inter[i]<<"\n";
    }
    return 0;
}