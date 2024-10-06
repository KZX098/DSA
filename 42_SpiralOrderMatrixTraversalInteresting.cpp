# include "bits/stdc++.h"
# include <iostream>
using namespace std;

signed main(){
    int n,m;
    cout<<"Enter no. of rows and columns: "<<endl;
    cin>>n>>m;

    //input
    cout<<"Enter array elements: "<<endl;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }

    //output
    cout<<"Matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;  
    }

    //Spiral order traversal or print
    cout<<"Spiral order traversal of matrix: "<<endl;
    int rowStart=0;
    int rowEnd=n-1;
    int columnStart=0;
    int columnEnd=m-1;

    while (rowStart<=rowEnd&&columnStart<=columnEnd)
    {
        //for starting row traversal
        for (int col = columnStart; col <=columnEnd; col++)
        {
            cout<<arr[rowStart][col]<<" ";
        }
        rowStart++;

        //for ending column traversal
        for (int row = rowStart; row <=rowEnd; row++)
        {
            cout<<arr[row][columnEnd]<<" ";
        }
        columnEnd--;

        //for last row traversal
        if (rowStart <= rowEnd) {
            for (int col = columnEnd; col >=columnStart; col--)
            {
                cout<<arr[rowEnd][col]<<" ";
            }
            rowEnd--;
        }

        //for starting column traversal
        if (columnStart <= columnEnd) {
            for (int row = rowEnd; row >=rowStart; row--)
            {
                cout<<arr[row][columnStart]<<" ";
            }
            columnStart++;
        }
    }
    
    return 0;
    }  