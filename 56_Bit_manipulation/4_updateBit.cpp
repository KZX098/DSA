//to set bit acc. to user
//update bit=clear bit+set bit
# include <iostream>
using namespace std;

int updateBit(int n, int pos, int value){
    int mask=~(1<<pos);
    n= n & mask;
    return (n|(value<<pos));
}

int main(){
    int n,pos,value;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<"Enter the position whose bit is to be updated "<<endl;
    cin>>pos;
    cout<<"Enter the bit to be placed: "<<endl;
    cin>>value;
    cout<<"The no. after bit at "<<pos<<" is updated with "<<value<<" : ";
    cout<<updateBit(n,pos,value);
    return 0;
}