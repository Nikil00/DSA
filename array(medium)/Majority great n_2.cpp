#include<iostream>
using namespace std;

int main()
{  
 int arr[9] = {3,3,4,2,4,4,2,4,4};
 int n=9;
 int element = 0;
 int freq = 0;
 int count = 0;
  for(int i=0;i<n;i++){
   if(count == 0){
     element = arr[i];
     count = 1;
   }else if(element == arr[i]){
      count++;
  }else{
    count--;
  }
  } 
  
  for(int i=0;i<n;i++){
    if(element == arr[i]){
        freq++;
    }
  } 
  
  if(freq>n/2){
   cout<<"freq"<<freq<<"\n";
   cout<<"Element"<<element;
  }else{
   cout<<"No majority elements";
  }
  
  
    return 0;
}