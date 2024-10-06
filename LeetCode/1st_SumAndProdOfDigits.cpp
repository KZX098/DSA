# include <iostream>
using namespace std;
int main(){
    int n, original;
    cin>>n;
    int quotient, rem, sum=0, prod=1;
    while(n!=0){
        rem=n%10;
        sum+=rem;
        prod*=rem;
        n=n/10;
    }
    cout<<"Sum of digits of "<<original<<" is "<<sum<<endl;
    cout<<"Prod. of digits of "<<original<<" is "<<prod<<endl;
    return 0;
}