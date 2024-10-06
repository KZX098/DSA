//count the number of ways to tile the given 2Xn board with tiles of size 2X1.
//tiles can be placed either vertically or horizontally therefore we will add all the ways of both.

# include <iostream>
using namespace std;

int tilingWays(int n){

    if(n==1){
        return 1;
    }
    
    if(n==0){
        return 0;
    }

    return tilingWays(n-1)+tilingWays(n-2);//when placed vertically+when placed horizontally
    
}

int main(){
    //here ans=3 :either all vertically,or two horizontal and two vertical,orall horizontally
    cout<<tilingWays(4);
    return 0;
}