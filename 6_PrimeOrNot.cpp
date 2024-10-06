# include <iostream>
# include <math.h>
using namespace std;
// int main(){
//     cin>>n;
//     int divisor=2;
//     if(divisor<n){
//         if(n%divisor==0){
//             cout<<"NotPrime"<<endl;
//         }
//         else{
//             divisor+=1;
//         }
//     }
//     else{
//         cout<<"Prime"<<endl;
//         }
//     return 0;
// }
// ctrl+k+c or ctrl+/


// int main(){
//     int n;
//     cin>>n;
//     int i;
//     for(i=2;i<n;i++)
//     {
//         if(n%i==0){
//             cout<<"NotPrime"<<endl;
//             break;
//         }
//     }
//     if(i==n){
//         cout<<"Prime"<<endl;
//     }
//     return 0;
// }

int main(){
    int n;
    cout<<"Enter a positive no.";
    cin>>n;
    bool flag=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"Non-Prime";
            flag=1;
            break;
        }
    }
    if(flag==0){
            cout<<"Prime";
    }
    return 0;
}
