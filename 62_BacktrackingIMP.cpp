//Rat in a Maze 
#include <iostream>
using namespace std;

bool isSafe(int** arr,int x,int y, int n){
    if (x<n && y<n && arr[x][y]==1)
    {
        return true;
    }
    
}

bool ratInMaze(int** arr, int x, int y, int n, int** solArr){

    if (x==n-1&&y==n-1)//base case
    {
        solArr[x][y]=1;
        return true;
    }
    
    if (isSafe(arr,x,y,n))
    {
        solArr[x][y]=1;
        //recursive call
        if(ratInMaze(arr,x+1,y,n,solArr)){//if it is possible(safe)to move right then return true;
            return true;
        }
        if (ratInMaze(arr,x,y+1,n,solArr))
        {
            return true;
        }
        //backtracking
        solArr[x][y]=0;
        return false;
    }
    return false;
}

int main(){
    cout<<"Enter size of a square maze: "<<endl;
    int n;
    cin>>n;

    //dynamic array allocation
    // int** arr = new int*[n];: This line declares a pointer arr to a pointer to an integer (int**). It then allocates memory for an array of n pointers to integers using the new operator. Essentially, arr is a pointer to an array of integer pointers. This line creates an array of n integer pointers where each pointer can potentially point to an array of integers.
    // for (int i = 0; i < n; i++): This line initiates a for loop that iterates n times, where n is typically the number of rows or columns in the two-dimensional array.
    // arr[i] = new int[n];: Inside the loop, this line allocates memory for each row of the two-dimensional array. It assigns to arr[i] a pointer to a dynamically allocated integer array of size n. So, arr[i] points to a row of n integers.
    // In summary, these lines of code create a dynamically allocated two-dimensional array of integers with n rows and n columns. Each row is a separate dynamically allocated integer array, and arr is an array of pointers that point to these rows. This allows you to work with a flexible-sized 2D array where you can access elements as arr[i][j] where i represents the row and j represents the column.
    cout<<"Enter which block could the rat go in an array(1 represents can go, 0 represents cannot): "<<endl;
    int** arr=new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=new int [n];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int** solArr=new int*[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i]=new int [n];

        for (int j = 0; j<n; j++)
        {
            solArr[i][j]=0;
        } 
    }

    if (ratInMaze(arr,0,0,n,solArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j<n; j++)
            {
                cout<<solArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}