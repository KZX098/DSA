#include <bits/stdc++.h>
using namespace std;
 
string DecimalToHex(int n)
{
 
    int base = 1;
    string ans="";
    while(base<=n)
        base*=16;
    base/=16;
    while(base>0){
        int last_digit=n/base;
        n-=last_digit*base;
        base/=16;
        if(last_digit<=9){
            ans=ans+to_string(last_digit);
        }
        else{
            char c='A' + last_digit-10;
            ans.push_back(c);  // C++ push_back() is a pre-defined function that is used to insert data or elements at the end of a vector or it pushes the element in the vector from the back.
        }
    }
    return ans;
}
// driver program
int main()
{
    int n;
    cout<<"Enter a decimal number:";
    cin>>n;
    cout << (DecimalToHex(n));
    return 0;
}