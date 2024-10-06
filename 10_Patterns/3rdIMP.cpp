/*  1
    2 3
    3 4 5
    4 5 6 7
    5 6 7 8 9 */

/*or we can use col=0
While(col < n)
    cout<<(row+col)-1;*/
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
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
    }