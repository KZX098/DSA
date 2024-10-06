# include <iostream>
using namespace std;

int search(int arr[], int N, int key)
{
    int s=0; int end=N; 
    while(s<=end){
        int mid=(s+end)/2;
        if(arr[mid]==key){
            return mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
  
// Driver code
int main(){

    int n;
    cout<<"Enter a number:";
    cin>>n;

    int array[n];

    //Input array elements
    cout<<"Enter "<<n<<" integers in ascending order:"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
  
    // Function call
    int key;
    cout<<"Enter number to search: "<<endl;
    cin>>key;
    int result = search(array, n, key);
    if(result == -1){
        cout << "Element is not present in array";
    }
    else
        cout << "Element is present at index " << result;
    return 0;
}