//we can obtain the bits of number (n-1) by changing the bits from 1st rightmost 1 of the number n.
//(n & n-1) have same bits as n except the rightmost set bit.

//The numbers n which are power of 2 contains only one set bit and after applying & with n-1 we will get all zeros.
# include <iostream>
using namespace std;

bool isPowerOf2(int n){
    return (n && !(n&(n-1)));
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<isPowerOf2(n);

    return 0;
}