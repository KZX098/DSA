# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements: "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int subarrays;
    cout<<"No. of subarrays that can be formed are: "<<endl;
    subarrays=n*(n+1)/2;
    cout<<subarrays<<endl;

    cout<<"Sum of elemnts in every subarray: ";
    int current;
    for(int i=0;i<=n-1;i++)
    {
        current=0;
        for(int j=i;j<=n-1;j++){
            current+=arr[j];
            cout<<current<<endl;
        }
    }

    return 0;
}