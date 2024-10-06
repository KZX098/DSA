//count the number of ways in which n friends can remain single or can be paired up.

# include <iostream>
using namespace std;

int friendsPairing(int n){

    if(n==0||n==1||n==2){
        return n;
    }

    return friendsPairing(n-1)+friendsPairing((n-2)*(n-1));//coz number of ways to pair nth person is n-1 therefore to pair n-2 persons is n-1*n-2
    
}

int main(){
    //here ans=3 :either all vertically,or two horizontal and two vertical,orall horizontally
    cout<<friendsPairing(3);
    return 0;
}