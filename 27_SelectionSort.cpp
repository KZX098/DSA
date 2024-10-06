# include <iostream>
using namespace std;

void sort(int arr[], int N)
{
    for(int i=0;i<=N-1;i++){
        for(int j=i+1;j<=N;j++){
            if(arr[j]<arr[i]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<=N-1;i++)
        cout<<arr[i]<<endl;
}
  
// Driver code
int main(){

    int n;
    cout<<"Enter a number:";
    cin>>n;

    int array[n];

    //Input array elements
    cout<<"Enter "<<n<<" integers: "<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    // Function call
    cout<<"Numbers in ascending order:"<<endl;
    sort(array,n);
    return 0;
}