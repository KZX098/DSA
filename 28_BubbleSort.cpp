# include <iostream>
using namespace std;

void sort(int arr[], int N)
{
    int counter=1;
    while(counter<N){
        for(int i=0;i<=N-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
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