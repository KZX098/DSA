# include "bits/stdc++.h"
# include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter no. of rows and columns of a matrix: "<<endl;
    cin>>n>>m;

    //input
    cout<<"Enter matrix elements in ascending order: "<<endl;
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

    //SEARCHING
    int key;
    cout<<"Enter element to search: "<<endl;
    cin>>key;
    //for searching we can go for linear search(O(n^2)for matrix)
    // bool flag=0;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(arr[i][j]==key){
    //             return true;
    //             flag=1;
    //             cout<<"At position "<<i+1<<","<<j+1<<endl;
    //         }
    //     }  
    // }
    // if(flag == 0){
    //     cout<<"element not found!"<<endl;
    // }
    // else{
    //     cout<<"Element found";
    // }


    //but we have more efficient method(if rows and columns are sorted)(O(n))
    //we can start from either top right element or bottom left element

    int r=0,c=m-1;//for top right element
    bool found=false;
    while (r<n&&c>=0)
    {
        if (arr[r][c]==key)
        {
            found=true;
            cout<<"At position"<<r+1<<","<<c+1<<endl;
            break;
        }
        if (arr[r][c]>key)
        {
            c--;
        }
        else{
            r++;
        }  
    }
    if(found==true){
        cout<<"Element found!"<<endl;
    }
    else
    {
        cout<<"Element does not exist!"<<endl;
    }
    
    return 0;          
}
