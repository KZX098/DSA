# include "bits/stdc++.h"
# include <iostream>
using namespace std;

int main(){
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

    //searching
    int k;
    cout<<"Enter the element to be found: "<<endl;
    cin>>k;
    bool flag=0;
    for(int i=0;i<n;i++){
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j]==k)
            {
                flag=1;
                cout<<"At position "<<i+1<<","<<j+1<<endl;
            }
        }  
    }
    if(flag == 0){
        cout<<"element not found!"<<endl;
    }
    else{
        cout<<"Element found";
    }
    return 0;
}




// #include <iostream>
// #include <utility>  // Include this header for using std::pair
// using namespace std;

// pair<int, int> search(int arr[][100], int n, int m, int k)  // Use an arbitrary large value like 100 for the second dimension
// {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (arr[i][j] == k) {
//                 return make_pair(i + 1, j + 1);  // Return a pair of values
//             }
//         }
//     }
//     return make_pair(-1, -1);  // Return a pair indicating not found
// }

// int main() {
//     int n, m;
//     cout << "Enter no. of rows and columns: " << endl;
//     cin >> n >> m;

//     cout << "Enter array elements: " << endl;
//     int arr[100][100];  // Using an arbitrary large value for both dimensions

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     cout << "Matrix is: " << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     int k;
//     cout << "Enter the element to be found: " << endl;
//     cin >> k;

//     pair<int, int> result = search(arr, n, m, k);
//     if (result.first == -1) {
//         cout << "Element not found!" << endl;
//     } else {
//         cout << "Element is found at position " << result.first << ", " << result.second << endl;
//     }

//     return 0;
// }
