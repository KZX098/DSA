# include <iostream>
using namespace std;

int search(int arr[], int N, int key)
{
    for (int i = 0; i < N; i++)
        if (arr[i] == key)
            return i+1;
    return -1;
}
  
// Driver code
int main(){

    int n;
    cout<<"Enter a number:";
    cin>>n;

    int array[n];

    //Input array elements
    cout<<"Enter "<<n<<" integers:"<<endl;
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