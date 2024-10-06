# include "bits/stdc++.h"
# include <iostream>
using namespace std;

bool pairSum(int arr[],int n,int k)
{
    //O(n^2)(Brute force approach)

    // for(int i=0;i<n-1;i++){
    //     for (int j = i; j < n; j++)
    //     {
    //         if (arr[i]+arr[j]==k)
    //         {
    //             cout<<"The pair whose sum is equal to "<<k<<" are present at indices "<<i+1<<" and "<<j+1<<endl;
    //             return true;
    //         }
            
    //     }
        
    // }
    // return false;


    //O(n)

    int low=0;
    int high=n-1;

    while (low<high)
    {
        int sum=0;
        sum=arr[low]+arr[high];

        if(sum<k){
            low+=1;
        }
        else if(sum>k)
        {
            high-=1;
        }
        else//when sum is equal to k
        {
            cout<<"The pair whose sum is equal to "<<k<<" are present at indices "<<low+1<<" and "<<high+1<<endl;
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter no. of elements: "<<endl;
    cin>>n;

    cout<<"Enter array elements: "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the sum whose pair is to be checked"<<endl;
    cin>>k;
    bool ans=pairSum(arr,n,k);
    cout<<ans<<endl;

    return 0;
}