//finding the mssing element form 1 to n in the array of size n-1
#include <bits/stdc++.h>
using namespace std;
#define forn(i,n) for (int i = 0; i < n; i++)

void solve(){
    int n;
    cin>>n;
    int a[n];
    long int sum = ((n+1)*(n+2))/2;
    forn(i,n){
        cin>>a[i];
        sum-=a[i];
    }
    cout<<sum;
}
int main(){
    solve();
    return 0;
}