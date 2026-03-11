#include<iostream>
using namespace std;

//SELLING STOCKS & BUYING STOCKS 
// TIME COMPLEXITY = O(n) 
//SPACE COMPLEXITY = O(1) 


int main()
{  
int arr[5]= {3, 2, 6, 1, 4};
 int n =5; 
  int profits = 0; 
  int mini = arr[0];
 for(int i=1;i<n;i++){
     int cost = arr[i] - mini; 
     if(cost>profits){
       profits = cost;
     } 
     if(arr[i]<mini){
        mini = arr[i];
     }
 }
  cout<<profits;
    return 0;
}