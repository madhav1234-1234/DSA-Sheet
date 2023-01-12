// 3.Merge two sorted array.

#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[],int arr2[],int m,int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(arr1[i]<=arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }else{
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    while(i<m){
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<n){
        cout<<arr2[j]<<" ";
        j++;
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    int arr1[m],arr2[n];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    merge(arr1,arr2,m,n);
}
