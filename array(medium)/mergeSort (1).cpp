#include<bits/stdc++.h>
using namespace std;

  void Merge(int arr[],int low, int mid, int high){  
        vector<int>temp;
        int left = low;
        int right  = mid+1;
      while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){ 
             temp.push_back(arr[left]);
             left++;
      }else{
      temp.push_back(arr[right]);
             right++;
      }
    } 
    while(left<=mid){
    temp.push_back(arr[left]);
             left++;
    } 
    while(right<=high){
    temp.push_back(arr[right]);
             right++;
    } 
    
    for(int i=low;i<=high;i++){
       arr[i] = temp[i-low];
    }
    
  } 
  
  
 void mergeSort(int arr[],int low,int high) {
     if(low == high){
      return;
     } 
    int mid = (low+high)/2;
   mergeSort(arr,low,mid);
   mergeSort(arr,mid+1,high);
   Merge(arr,low,mid,high);
  } 
  
int main()
{ 
 int arr[6] ={2,0,2,1,1,0};  
 int n = 6;
    int low = 0;
    int high = n-1; 
    mergeSort(arr,low,high); 
    for(int i=0;i<n;i++){
      cout<<arr[i];
    }
    return 0;
}