# include <iostream>
# include <cmath>
using namespace std;

bool check(int a, int b, int c){
    int x=max(a,max(b,c));//max is a predefined fn. in c++ to calculate max of two numbers
    int y,z;
    if (x==a){
        y=b;
        z=c;
    }
    else if (x==b)
    {
        y=a;
        z=c;
    }
    else
    {
        y=a;
        z=b;
    }
    if(x*x==y*y+z*z){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    int a,b,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    if (check(a,b,c))
    {
        cout<<"It is a pythagorian triplet";
    }
    else{
        cout<<"Not a pythagorian triplet";
    }
    return 0;
}