#include<iostream>
using namespace std;

int main()
{ 
 int arr[4] = {1,2,4,5}; 
int n = 4; 
int hash[5] = {0};

for(int i=0;i<n;i++){
   hash[arr[i]]++;
} 

for(int i=0;i<n+1;i++){ 
     cout<<arr[i]<<"=="<<i<<"\n";
   if(hash[i] == 0) {
       cout<<i;
       break;
   }
}
    return 0; 
}