//(n & n-1) have same bits as n except the rightmost set bit.
//doing this untill 0 comes up and counting. 
# include <iostream>
using namespace std;

int noOf1s(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    cout<<"No. of 1s in "<<n<<" are: ";
    cout<<noOf1s(n);

    return 0;
}