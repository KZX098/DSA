# include <iostream>
using namespace std;
int fibbonacci(int n){
    int a=0;
    int b=1;
    cout<<a<<" "<<b;
    for(int i=0;i<=n-1;i++){
        int c=a+b;
        cout<<" "<<c;
        a=b;
        b=c;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter number of terms:";
    cin>>n;
    fibbonacci(n);

    return 0;
}