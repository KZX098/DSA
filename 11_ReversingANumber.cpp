# include <iostream>
using namespace std;
int main(){
    int n,reverse=0;
    cout<<"Enter a number:";
    cin>>n;
    while(n>0){
        int lastDigit=n%10;

        //will return 0 if the number is not in the range of int
        if((reverse>INT_MAX/10)||(reverse<INT_MIN/10)){
            return 0;
        }
        
        reverse=reverse*10 + lastDigit;
        n=n/10;
    }
    cout<<"Reversed no."<<reverse;
    return 0;
}