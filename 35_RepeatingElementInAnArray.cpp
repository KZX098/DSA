//To find the smallest index of all repeating elements in an array
# include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements: "<<endl;
    cin>>n;
    
    cout<<"Enter array elements: "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //array of indexes
    const int N=1e6+2; //10to power six +2
    int index[N];
    for (int i = 0; i <N; i++)
    {
        index[i]=-1;//storing -1 for now
    }

    int minIndex=INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        if (index[i]!=-1)
        {
            minIndex=min(minIndex,index[arr[i]]);
        }
        else{
            index[arr[i]]=i;
        }
    }

    if (minIndex==-1)
    {
        cout<<"-1"<<endl;
    }
    else{
        cout<<minIndex+1<<endl;//index acc. to user
    }
    return 0;
}