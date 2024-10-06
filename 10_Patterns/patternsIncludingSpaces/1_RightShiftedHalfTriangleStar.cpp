//     *
//    **
//   ***
//  ****
// *****
# include <iostream>
using namespace std;
int main(){
    int i=1; int n;
    cin>>n;
    while(i<=n){
        int k=(n-i);
        while (k)
            {
                cout<<" ";
                k--;
            }
        int j=1;
        while (j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++; 
    }
}