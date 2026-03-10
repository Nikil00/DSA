#include<iostream>
using namespace std;

int main()
{ 
  
  int arr[6] ={1,5,4,7,7,2};
int n=6;
  int Big = arr[0];
  int second = arr[0];
  for(int i=0;i<n;i++){
     if(arr[i]>Big) {
       Big = arr[i];
     }
  }   
  
  for(int i=1;i<n;i++){
     if(arr[i]>second && arr[i]!=Big){
        second = arr[i];
     }
  }
  cout<<Big<<"\n";
  cout<<second;
    return 0;
}