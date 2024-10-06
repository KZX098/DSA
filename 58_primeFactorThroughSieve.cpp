# include <iostream>
using namespace std;

void primeFactor(int n){
    int spf[100]={0};//smallest prime factor
    for (int i = 2; i <=n; i++)
    {
        spf[i]=i;//smallest prime factor of a prime number is the number itself
    }
    for (int i = 2; i <=n; i++)
    {
        if(spf[i]==i){
            for (int j = i*i; j <=n; j+=i)
            {
                if (spf[j]==j)
                {
                    spf[j]=i;
                }
                
                
            }
            
        }
    }

    while (n!=1)//dividing the number with its prime factor until it comes out to be 1 to find all prime factors
    {
        //All prime factors
        cout<<spf[n]<<" ";
        n/=spf[n];
    }
    
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Prime factors: "<<endl;
    primeFactor(n);

    return 0;
}