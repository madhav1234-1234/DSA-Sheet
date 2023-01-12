// Find missing and repeating number( 1<=arr[i]<=n )

#include<bits/stdc++.h>
using namespace std;
int missing(int arr[],int n){
    int sum=n*(n+1)/2;
    int sum1=0;
    for(int i=0;i<n;i++){
        sum1=sum1+arr[i];
    }
    return sum1-sum;
}
int repeating(int arr[],int n){
    int sum1,sum2,sum3=0,sum4=0;
    sum1=n*(n+1)/2;
    sum2=(n*(n+1)*(2*n+1))/6;
    for(int i=0;i<n;i++){
        sum3+=arr[i];
    }
    for(int i=0;i<n;i++){
        sum4+=(arr[i]*arr[i]);
    }
    int res=(sum4-sum2)/(sum3-sum1);
    return res-(sum3-sum1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=missing(arr,n);
    cout<<ans<<" ";
    int ans1=repeating(arr,n);
    cout<<ans1;
}
