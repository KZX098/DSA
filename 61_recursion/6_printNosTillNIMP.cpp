# include <iostream>
using namespace std;
void descending(int n){

    if (n==1)
    {
        cout<<"1";
        return;
    }

    cout<<n<<endl;
    descending(n-1);
}

void ascending(int n){
    if (n==1)
    {
        cout<<"1";
        return;
    }
    
    ascending(n-1);
    cout<<endl;
    cout<<n<<endl;
    
}

int main(){
    int n;
    cout<<"Enter a no.: "<<endl;
    cin>>n;
    cout<<"Nos. in ascending order till "<<n<<" : "<<endl;
    ascending(n);
    cout<<"Nos. in descending order from "<<n<<" : "<<endl;
    descending(n);
    return 0;
}