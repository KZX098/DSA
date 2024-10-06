//                   1
//                 2 1 2
//               3 2 1 2 3
//             4 3 2 1 2 3 4
//           5 4 3 2 1 2 3 4 5
//         6 5 4 3 2 1 2 3 4 5 6
//       7 6 5 4 3 2 1 2 3 4 5 6 7
//     8 7 6 5 4 3 2 1 2 3 4 5 6 7 8
//   9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9
// 10 9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9 10
# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        int j; //so that this for loop can be accessed by another for loop
        for(j=1;j<=n-i;j++){
            cout<<" ";
            cout<<" ";
        }
        int k=i;
        for(;j<=n;j++){ //so that its initialization starts from the end of first for loop i.e. n-i
        cout<<k--;
        cout<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++){
        cout<<k++;
        cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}