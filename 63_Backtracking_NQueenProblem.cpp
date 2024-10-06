//To arrange n queens in a chessboard of size nXn such that no two queens attack each other.
//Every row must contain exactly one queen
//no queens must be present diagonally adjacent to each other
#include <iostream>
using namespace std;

bool isSafe(int** arr,int x,int y, int n){
    //checking for row
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y]==1)
        {
            return false;
        }
    }

    //checking for left upper diagonal
    int row=x;
    int col=y;
    while (row>=0&&col>=0)
    {
        if (arr[x][y]==1)
        {
            return false;
        }
        row--;
        col--;
        
    }

    //checking for right upper diagonal
    row=x;
    col=y;
    while (row>=0&&col<n)
    {
        if (arr[x][y]==1)
        {
            return false;
        }
        row--;
        col++;
        
    }
    return true;
    
}

bool nQueen(int** arr, int x, int n){

    //it means we have placed our n queens in n rows
    if (x>=n)
    {
        return true;
    }

    //now checking is it safe to place queen in the column or not
    for (int col = 0; col <n ; col++)
    {
        if (isSafe(arr,x,col,n))
        {
            arr[x][col]=1;


            //checking for next row
            if (nQueen(arr,x+1,n))
            {
                return true;
            }
            arr[x][col]=0; //backtracking
        }
        
    }
    
    return false;
}
    

int main(){
    cout<<"Enter size of chess: "<<endl;
    int n;
    cin>>n;

    //dynamic array allocation
    // int** arr = new int*[n];: This line declares a pointer arr to a pointer to an integer (int**). It then allocates memory for an array of n pointers to integers using the new operator. Essentially, arr is a pointer to an array of integer pointers. This line creates an array of n integer pointers where each pointer can potentially point to an array of integers.
    // for (int i = 0; i < n; i++): This line initiates a for loop that iterates n times, where n is typically the number of rows or columns in the two-dimensional array.
    // arr[i] = new int[n];: Inside the loop, this line allocates memory for each row of the two-dimensional array. It assigns to arr[i] a pointer to a dynamically allocated integer array of size n. So, arr[i] points to a row of n integers.
    // In summary, these lines of code create a dynamically allocated two-dimensional array of integers with n rows and n columns. Each row is a separate dynamically allocated integer array, and arr is an array of pointers that point to these rows. This allows you to work with a flexible-sized 2D array where you can access elements as arr[i][j] where i represents the row and j represents the column.
    
    int** arr=new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=new int [n];
    
        for (int j = 0; j<n; j++)
        {
            arr[i][j]=0;
        }
    }
    
    if (nQueen(arr,0,n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j<n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}