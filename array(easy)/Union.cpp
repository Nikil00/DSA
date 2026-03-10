#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[6]= {1,1,2,3,4,5};
    int n1=6;
    int arr2[6]= {2,3,4,4,7,8};
    int n2=6;
    vector<int> Union;
    int j=0;
    int i=0;

    while(i<n1 && j<n2) {
        if(arr1[i]<=arr2[j]) {
            cout<<"index i"<<i<<"->"<<arr1[i]<<"\n";
            if(Union.size()== 0 || arr1[i]!=Union.back()) {
                Union.push_back(arr1[i]);
            }
            i++;
        } else {
            cout<<"index j"<<j<<"->"<<arr2[i]<<"\n";
            if(Union.size()==0 || arr2[j]!=Union.back()) {
                Union.push_back(arr2[j]);
            }
            j++;
        }


    }
    while(i<n1) {
        if(Union.size()== 0 || arr1[i]!=Union.back()) {
            Union.push_back(arr1[i]);
        }
        i++;
    }

    while(j<n2) {
        if(Union.size()==0 || arr2[j]!=Union.back()) {
            Union.push_back(arr2[j]);
        }
        j++;
    }





    for(int i=0; i<Union.size(); i++) {
        cout<<Union[i];
    }

    return 0;
}