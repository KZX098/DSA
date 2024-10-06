//To find prime numbers between a given range
//First of all we will make the array of size of range then we will start marking(cutting)the multiples of 2,3...(those elements which are unmarked.)The unmarked numbers are our prime numbers.
# include <iostream>
using namespace std;

void primeSieve(int n){
    int prime[100]={0};
    for (int i = 2; i <=n; i++)
    {
        if (prime[i]==0)//Those elements which are unmarked
        {
            //marking their multiples
            for (int j = i*i; j <=n; j+=i)//starting from i*i coz rest are already marked
            {
                prime[j]=1;
            }
            
        }
           
    }
    for (int i = 0; i <=n; i++)
    {
        if (prime[i]==0)
        {
            cout<<i<<" "<<endl;
        }
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    primeSieve(n);

    return 0;
}