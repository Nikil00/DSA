#include<iostream>
using namespace std;

int main()
{ 
int arr[5] = {8,3, 4, 2, 6};
int n = 5;
sort(arr, arr + n);

int i=0;
int target = 14;
int j = n-1; 
while(i<j){
  if(arr[i] + arr[j] == target){
      cout<<"("<<i<<","<<j<<")";
      cout<<"\n";
  } 
  if(arr[i] + arr[j] > target){
     j--;
  }else{
     i++;
  }
}
    
    return 0;
}