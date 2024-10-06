# include <iostream>
using namespace std;

void subsets(int arr[],int n){
    //loop for all subsets
    for(int i=0;i<(1<<n);i++)//1<<n--->2^n
    {
        for(int j=0;j<n;j++){
            //checking each bit at jth position is set or not
            if (i&(1<<j))//if jth bit is set
            {
                cout<<arr[j]<<" ";
            }
            
        }cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter number of terms in the set: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the set elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"subsets:"<<endl;
    subsets(arr,n);

    return 0;
}