//mode-the element which is occuring max. no. of times
#include <bits/stdc++.h>
using namespace std;
void findMode(int *a,int n){
    int count=1;
    int max_count=count,mode=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>max_count){
            max_count=count;
            mode=a[i];
        }
        count=1;
    }
    cout<<mode<<"\n";

    //sir used hashmap
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    findMode(a,n);
    return 0;
}