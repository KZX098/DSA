// * * *
//  * * 
// * * *
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            if(count%2==0)
            {
                cout<<"*";
            }else
            {
                cout<<" ";
            }
            count++;
        }
        cout<<endl;
    }

}
