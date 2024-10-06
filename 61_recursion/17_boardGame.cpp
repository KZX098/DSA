//calculate all the possible number of paths from starting point to end point in a board game

# include <iostream>
using namespace std;

int countPath(int start, int end){

    if(start==end){
        return 1;
    }

    if(start>end){
        return 0;
    }

    int count=0;
    for (int i = 1; i <=6; i++)//no. of jumps depends on the number that comes up on dice
    {
        count+=countPath(start+i,end);
    }
    return count;
    
}

int main(){
    int start,end;
    cout<<"Enter the starting and ending point: "<<endl;
    cin>>start>>end;
    cout<<countPath(start,end);
    return 0;
}