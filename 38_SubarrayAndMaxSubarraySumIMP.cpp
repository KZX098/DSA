//A subarray is a contiguous part of an array.
# include "bits/stdc++.h"
# include <iostream>
using namespace std;
int main(){
    int n,s;
    cout<<"Enter no. of elements: "<<endl;
    cin>>n;

    cout<<"Enter array elements: "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //printing all the subarrays
    cout<<"All subarrays: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for (int k = i; k <= j; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }

    //printing the maximum sum of subarray((time complexity of O(n^3), which is not ideal for larger arrays.))
    int sum=0; int maxSum=INT32_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for (int k = i; k <= j; k++)
            {
                sum+=arr[k];
            }
            maxSum=max(maxSum,sum); 
        } 
    }
    cout<<"Maximum subarray sum using brute force algorithm: "<<maxSum<<endl;

    //printing the maximum sum of subarray by using cumulative sum approach(O(n^2))
    int currSum[n+1];
    currSum[0]=0;
    for(int i=1;i<n+1;i++){
        currSum[i]=currSum[i-1]+arr[i-1];//coz loop is starting from 1 
    }

    int MaxSum=INT32_MIN;
    for(int i=1;i<=n;i++){
        int Sum=0;
        for(int j=0;j<=i;j++){
            Sum=currSum[i]-currSum[j];//sum of whole array-sum of non maximum resulting subarray
            MaxSum=max(MaxSum,Sum);
        }
    }
    cout<<"Maximum subarray sum using cumulative sum approach: "<<MaxSum<<endl;

    //printing the maximum sum of subarray by using Kadane's algorithm(best way(O(n)))
    int currSum1=0; int maxSum1=INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum1+=arr[i];

        if(currSum1<0){
        currSum1=0;
        }
        maxSum1=max(maxSum1,currSum1);
    }
    cout<<"Maximum subarray sum using Kadane's algorithm: "<<maxSum1<<endl;
    
    return 0;
}