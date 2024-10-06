# include "bits/stdc++.h"
# include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter no. of rows and columns of a matrix: "<<endl;
    cin>>n>>m;

    //input
    cout<<"Enter matrix elements: "<<endl;
    int matrix1[n][m];

    for(int i=0;i<n;i++){
        for (int j = 0; j < m; j++)
        {
            cin>>matrix1[i][j];
        }
    }

    //input2
    int n2,m2;
    cout<<"Enter no. of rows and columns of another matrix: "<<endl;
    cin>>n2>>m2;

    cout<<"Enter matrix2 elements: "<<endl;
    int matrix2[n2][m2];

    for(int i=0;i<n2;i++){
        for (int j = 0; j < m2; j++)
        {
            cin>>matrix2[i][j];
        }
    }

    //output
    cout<<"Matrix1 is: "<<endl;
    for(int i=0;i<n;i++){
        for (int j = 0; j < m; j++)
        {
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;  
    }

    //output2
    cout<<"Matrix2 is: "<<endl;
    for(int i=0;i<n2;i++){
        for (int j = 0; j < m2; j++)
        {
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;  
    }

    //matrix multiplication(O(n^3))
    if (m!=n2)
    {
        cout<<"Matrix multiplication not possible!"<<endl<<"For matrix multiplication column number of 1st matrix must be equal to row no. of second matrix"<<endl;
        return 0;    
    }
    else{
        int ans[n][m2];
        for (int i = 0; i < n; i++)//row of 1st matrix
        {
            for (int j = 0; j < m2; j++)//column of second matrix
            {
                ans[i][j]=0;//initializing all elements of answer matrix by 0
            }
        }

        //logic
        for (int i = 0; i < n; i++)//row of 1st matrix
        {
            for (int j = 0; j < m2; j++)//column of second matrix
            {
                for (int k = 0; k < m; k++)
                {
                    ans[i][j]+=matrix1[i][k]*matrix2[k][j];
                } 
            }
        }

        cout<<"Matrix multiplication: "<<endl;
        for (int i = 0; i < n; i++)//row of 1st matrix
        {
            for (int j = 0; j < m2; j++)//column of second matrix
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }        
    }
    return 0;
}