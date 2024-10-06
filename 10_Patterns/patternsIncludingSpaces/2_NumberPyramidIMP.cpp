//     1
//    121
//   12321
//  1234321
// 123454321
# include <iostream>
using namespace std;
int main(){
    int i=1; int n;
    cin>>n;
    while(i<=n){
        int k=n-i;
        while (k)
            {
                cout<<" ";
                k--;
            }
        int j=1;
        while (j<=i)
        {
            cout<<j;
            j++;
        }
        int l=i-1;
        while (l)
        {
            cout<<l;
            l--;
        }
        cout<<endl;
        i++;
    }
}