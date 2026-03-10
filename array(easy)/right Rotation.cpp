#include<iostream>
using namespace std;
void rightRotation(int arr[],int n,int d) {
 d = d%n;
 int temp[d];
 for(int i=0;i<d;i++){ //2 = 0,1
  temp[i] = arr[(n-d)+i];
 }
//stored in temp array
  for(int i=0;i<d;i++){ //2 = 0,1
      cout<<"temp"<<temp[i]<<"\n";
 }

for(int i=n-1;i>=d;i--){ //2 
     cout<<"index"<<i<<"\n";
   arr[i] = arr[i-d];
} 

for(int i=0;i<n;i++) {
   cout<<"updated"<<arr[i]<<"\n";
} 

for(int i=0;i<d;i++){ 
   arr[d-(i+1)] = temp[d-(i+1)];
}

}
int main()
{  
 int n;
 cout<<"Enter N value & values :";
 cin>>n; 
 int arr[n];
 for(int i=0;i<n;i++){
   cin>>arr[i];
 } 
 int d;
 cout<<"Enter Number of rotation:";
 cin>>d;
 rightRotation(arr,n,d);
 for(int i=0;i<n;i++){
  cout<<arr[i];
 }
    return 0;
}