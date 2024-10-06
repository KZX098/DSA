# include "bits/stdc++.h"
# include <iostream>
using namespace std;
int main(){

    //char arr[n+1];
    char arr[100];

    //input
    cout<<"Enter a string: "<<endl;
    cin>>arr;

    //output
    cout<<arr<<endl;

    //traversing each character
    int i=0;
    while (arr[i]!='\0')
    {
        cout<<arr[i]<<endl;
        i++;
    }
    
    //for length of character array: sizeof(array)/sizeof(array[0])
    return 0;
}