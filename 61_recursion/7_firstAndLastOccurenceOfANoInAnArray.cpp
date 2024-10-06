# include <iostream>
using namespace std;

int firstOcc(int arr[],int n,int i,int key){

    if (i==n)
    {
        return -1;
    }
    if (arr[i]==key)
    {
        return i;
    }
    return firstOcc(arr,n,i+1,key);
    
}

int lastOcc(int arr[],int n, int i, int key){

    if (i==n)
    {
        return -1;
    }

    int restArray=lastOcc(arr,n,i+1,key);//first checking in the rest array
    if (restArray!=-1)
    {
        return restArray;
    }
    if (arr[i]==key)//then checking for our whole array
    {
        return i;
    }
    return -1;
}

int main(){
    int n,arr[n],i,key;
    cout<<"Enter a no.: "<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements: "<<endl;
    for (int j = 0; j <=n; j++)
    {
        cin>>arr[j];
    }
    cout<<"Enter the starting position: "<<endl;
    cin>>i;
    cout<<"Enter element whose first and last occurence is to be found: "<<endl;
    cin>>key;
    cout<<"First occurence of "<<key<<" : "<<endl;
    cout<<firstOcc(arr,n,i,key);
    cout<<"Last occurence of "<<key<<" : "<<endl;
    cout<<lastOcc(arr,n,i,key);
    return 0;
}