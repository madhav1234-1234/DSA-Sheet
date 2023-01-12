# 1.Sort an array with 0's,1's and 2's

#NAIVE SOLUTION

#include<bits/stdc++.h>
using namespace std;
void sortarr(int arr[],int n){
    int temp[n];
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            temp[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            temp[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==2){
            temp[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}



#OPTIMISED SOLUTION(DUTCH NATIONAL FLAG ALGORITHM)
void sortarr(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortarr(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
