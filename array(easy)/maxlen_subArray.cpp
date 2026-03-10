#include<iostream>
using namespace std;

int main() 
{ 
 int arr[3] = {1, 2, 3};
 int n = 3 ;
  int max = 0; 
  int Number = 3;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){ 
           int sum =0;
       for(int k=i;k<=j;k++){   
           sum = sum+arr[k];
         } 
        if(sum==Number){ 
           int length  = j-i+1;
            if( length > max){
              max = length; 
         }
       } 
       
    } 
  } 
 cout<<max<<"\n";
    return 0;
}