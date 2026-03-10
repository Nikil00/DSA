#include<iostream>
using namespace std;

int main()
{  
 int arr[7]={1,1,2,2,3,3,3};
  int n=7; 
    int j=1; 
    for(int i=0;i<n-1;i++){
      if(arr[i]!=arr[i+1]){
         arr[j] = arr[i+1];
         j++;
      }
    }
    
    for(int i=0;i<n;i++){
      cout<<arr[i]<<"\n";
    }
    return 0;
}