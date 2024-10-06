# include "bits/stdc++.h"
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

    const int N=1e6+2;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i]=false;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=0)//coz we have to check for positive missing integer
        {
            check[arr[i]]=true;
        }
    }
    int ans=-1;
    for(int i=1;i<N;i++)//coz we have to check for positive missing integer
    {
        if (check[arr[i]]==false)
        {
            ans=i;
            break;
        }
    }
    cout<<"Missing smallest positive integer is "<<ans<<endl;   
    
    return 0;
}