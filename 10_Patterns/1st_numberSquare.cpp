/*1234
  1234
  1234
  1234*/
# include <iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter no. of rows"<<endl;
    cin>>rows;
    for(int i=1; i<=rows;i++)
    {
        for(int j=1; j<=rows;j++){
            cout<<j;
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
    }
