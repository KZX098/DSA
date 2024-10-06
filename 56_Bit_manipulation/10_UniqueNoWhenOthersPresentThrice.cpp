# include <iostream>
using namespace std;

bool getBit(int n,int pos){
    return ((n&(1<<pos))!=0);
}

int setBit(int n, int pos){//set means to make it 1
    return ((n|1<<pos));
}

int unique(int arr[], int n){
    int result=0;
    for (int i = 0; i < 64; i++)
    {
        int sum=0;
        for (int j = 0; j < n; i++)
        {
            if (getBit(arr[j],i))
            {
                sum++;
            }
        
        }
        if (sum%3!=0)
        {
            result=setBit(result,i);
        }
    }
    return result;  
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
    cout<<"Unique number: "<<endl;
    return 0;
}
