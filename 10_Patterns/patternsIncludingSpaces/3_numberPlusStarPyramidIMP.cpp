//:)
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
# include <iostream>
using namespace std;
int main(){
    int i=1; int n;
    cin>>n;
    while(i<=n){
        int j=1;
        while (j<=n-i+1)
        {
            cout<<j;
            j++;
        }
        for(int star=0;star<2*i-2;star++){
            cout<<"*";
        }
        // int star=0;
        // while (star<=2*i-2)
        //     {
        //         cout<<"*";
        //         star++;
        //     }
        int l=n-i+1;
        while (l>=1)
        {
            cout<<l;
            l--;
        }
        cout<<endl;
        i++;
    }
}