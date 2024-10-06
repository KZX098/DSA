# include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for (int i = 2; i <= n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int binaryCoeff(int n, int r){
    int factN=factorial(n);
    int fact2=factorial(n-r);
    int factR=factorial(r);
    int result=factN/(fact2*factR);
    return result;
}
int main(){
    int n,r;
    cout<<"Enter n for calculating nCr:";
    cin>>n;
    cout<<"Enter r:";
    cin>>r;
    int ans=binaryCoeff(n,r);
    cout<<"BinaryCoeff:"<<ans<<endl; 
    return 0;
}
