# include "bits/stdc++.h"
using namespace std;
int main(){
    int n,s;
    cout<<"Enter no. of elements: "<<endl;
    cin>>n;
    cout<<"Enter s: "<<endl;
    cin>>s;

    cout<<"Enter array elements: "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0,j=0,st=-1,end=-1,sum=0;
    while(j<n&&sum+arr[j]<=s)
    {
        sum+=arr[j];
        j++;
    }
    if(sum=s){
        cout<<"Range of countinuous subarray whose sum is "<<s<<endl;
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    while (j<n)
    {
        sum+=arr[j];
        while (sum>s)
        {
            sum-=arr[i];
            i++;
        }
        if(sum==s){
            st+=i+1;
            end+=j+1;
            break;
        }
        j++;
    }
    cout<<"Range of countinuous subarray whose sum is "<<s<<endl;
    cout<<st<<" "<<end<<endl;
    return 0;
}