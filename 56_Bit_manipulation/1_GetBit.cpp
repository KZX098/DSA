# include <iostream>
using namespace std;

int getBit(int n, int pos){
    return(n&(1<<pos)!=0); //returns 1 if n AND (1<<pos) is not equal to 0; (1<<pos) is bits of 1 shifted by pos to get the number containing 1 only at the postion whose bit is to be found  
}

int main(){
    int n,pos;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<"Enter the position whose bit is to be found "<<endl;
    cin>>pos;
    cout<<getBit(n,pos);
    return 0;
}