//XOR gives output 0 when the numbers are same
# include <iostream>
using namespace std;

int unique(int arr[],int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements:"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Unique number: "<<endl<<unique(arr,n);

    return 0;
}