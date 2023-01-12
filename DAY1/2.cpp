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
    int sum=(n*(n+1)*(2*n+1))/6;
    int sum1=0;
    int sum2=n*(n+1)/2;
    int sum3=0;
    for(int i=0;i<n;i++){
        sum3=sum3+arr[i];
    }
    for(int i=0;i<n;i++){
        sum1=sum1+(arr[i]*arr[i]);
    }
    int res=sum1-sum;
    int res1=sum3-sum2;
    int ans=res/res1;
    int ans1=ans-res1;
    return ans1;
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
