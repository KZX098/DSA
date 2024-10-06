//GCD or HCF of two numbers is calculated by multiplying their common prime factors.
//Logic:when two numbers are subtracted their GCD does not change.
//here we minimize our number by calculating rem untill 0 comes up.
# include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int rem=0;
    while (b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;//which contains the last value of b
    
}

int main(){
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is: "<<endl;
    cout<<gcd(a,b);
    return 0;
}