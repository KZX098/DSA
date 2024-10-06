#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int arr[9]={1,2,3,4,5,6,7,8,9};
//     int i=0;
//     int j=8;
//     while(i<=j){
//             // int temp;
//             // temp=arr[i];
//             // arr[i]=arr[j];
//             // arr[j]=temp;
//             // i++;
//             // j--;
//             swap(arr[i],arr[j]);
//     }
//     for(int i=0;i<=8;i++){
//         cout<<arr[i];
//     }
// }
void array_reversal(int *a,int n){
    for(int i=0;i<n/2;i++){
        swap(a[i],a[n-i-1]);
    }
    for (int j = 0; j < n; j++)
    {
        cout<<a[j];
    }
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    array_reversal(a,n);
    return 0;
}