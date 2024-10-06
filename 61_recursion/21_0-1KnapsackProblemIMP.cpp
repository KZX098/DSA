//maximum no of items that can be put in a knapsack such that their sum of weights is less than or equal to the weight of knapsack and their cumulative sum of values(in rupees)is maximum. 

# include <iostream>
using namespace std;

int knapSack(int value[], int w[], int n, int W){

    if(n==0||W==0){
        return 0;
    }

    if (w[n-1]>W)
    {
        return knapSack(value,w,n-1,W);
    }
    

    //when n-1th item is to be included
    int included=knapSack(value,w,n-1,W-w[n-1])+value[n-1];
    //when n-1th elemnt is not to be included
    int excluded=knapSack(value,w,n-1,W);

    return(max(included,excluded));

}

int main(){
    int w[]={10,20,30};
    int value[]={100,50,150};
    int W=50;
    cout<<knapSack(value,w,3,W)<<endl;
    return 0;
}