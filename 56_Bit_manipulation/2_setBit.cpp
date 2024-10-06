# include <iostream>
using namespace std;

int setBit(int n, int pos){//set means to make it 1
    return ((n|1<<pos));
}

int main(){
    int n,pos;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<"Enter the position whose bit is to be set "<<endl;
    cin>>pos;
    cout<<"The no. after bit at "<<pos<<" is set: ";
    cout<<setBit(n,pos);
    return 0;
}