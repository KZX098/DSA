# include <iostream>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1){//base condition--always true(sorted)
        return true;
    }
    bool restArray=sorted(arr+1,n-1);
    return((arr[0]<arr[1])&&restArray);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"1 means sorted, 0 means unsorted:  "<<endl;
    cout<<sorted(arr,n);
    return 0;
}