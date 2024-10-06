# include "bits/stdc++.h"
# include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows or columns of a square matrix: "<<endl;
    cin>>n;

    //input
    cout<<"Enter array elements: "<<endl;
    int arr[n][n];

    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    //output
    cout<<"Matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;  
    }

    //transpose matrix
    for(int i=0;i<n;i++){
        for (int j = i; j < n; j++)//so that row is always greater than column to traverese upper triangle of the matrix
        {       
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
        }
    }

    cout<<"Transposed matrix:"<<endl;
    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {       
            cout<<arr[i][j]<<" ";
        }     
        cout<<endl;   
    } 
    return 0;
}