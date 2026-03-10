#include<iostream>
using namespace std;

int main()
{  
int arr[10] = {1,1,0,1,1,1,1,0,1,1};
int n=10;
int max =0;
int count =0;
for(int i=0;i<n;i++){
  if(arr[i]==1) {
    count++;
    if(count>max){
      max = count;
    }
  }else{
    count =0;
}
} 

cout<<max;
    return 0;
}