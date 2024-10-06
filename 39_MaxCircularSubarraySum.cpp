# include "bits/stdc++.h"
# include <iostream>
using namespace std;

int kadaneAlgo(int arr[],int n){
    int currSum1=0; int maxSum1=INT32_MIN;
        for (int i = 0; i < n; i++)
        {
            currSum1+=arr[i];

            if(currSum1<0){
            currSum1=0;
            }
            maxSum1=max(maxSum1,currSum1);
        }
        return maxSum1;
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

    int wrapSum;
    int nonwrapSum;

    nonwrapSum=kadaneAlgo(arr,n);

    //reversing the sign of all the array elements
    int totalSum=0;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
        arr[i]=-arr[i]; 
    }
    //calculating the maximum circular Subarray sum(total subarray sum-sum of non contributing elements(those elements which do not contribute to max sum))
    //eg: 4 -4 6 -6 10 -11 12
    //max circular subarray sum: 22 (12+4+(-4)+6+(-6)+10)
    wrapSum=totalSum-(-kadaneAlgo(arr,n));
    cout<<"max circular subarray sum: "<<max(wrapSum,nonwrapSum)<<endl;
    return 0;
}