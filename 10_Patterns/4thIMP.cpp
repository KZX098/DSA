/*  1
    2 1
    3 2 1
    4 3 2 1
    5 4 3 2 1*/

//or we can cout<<(i-j+1) instead of using value
# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        int value=i;
        while (j<=i)
        {
            cout<<value<<" ";
            value--;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
    }