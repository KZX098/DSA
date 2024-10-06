# include <iostream>
using namespace std;

int clearBit(int n, int pos){
    int mask=~(1<<pos);
    return (n & mask);
}

int main(){
    int n,pos;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<"Enter the position whose bit is to be set "<<endl;
    cin>>pos;
    cout<<"The no. after bit at "<<pos<<" is cleared: ";
    cout<<clearBit(n,pos);
    return 0;
}