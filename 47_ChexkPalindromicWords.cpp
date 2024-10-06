# include "bits/stdc++.h"
# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size(integer): "<<endl;
    cin>>n;

    char arr[n+1];
    cout<<"Enter a string of size entered: "<<endl;
    cin>>arr;

    bool check=1;
    for (int i = 0; i < n; i++)
    {
        //logic
        if (arr[i]!=arr[n-1-i])
        {
            check=0;
            break;
        }
        
    }
    if (check==0)
    {
        cout<<"Not palindrome!"<<endl;
    }
    else{
        cout<<"Palindrome"<<endl;
    }
    return 0;
}

    