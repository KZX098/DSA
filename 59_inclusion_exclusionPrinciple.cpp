//To find out the numbers from 1 to 1000 which are divisible by 5 or 7.
//ans= divisible by 5 + divisible by 7 - divisible by both
# include <iostream>
using namespace std;
int main(){
    int n,a,b;
    cout<<"Enter three numbers: "<<endl;
    cin>>n>>a>>b;
    int c1,c2,c3;
    c1=n/a;//nos div by a
    c2=n/b;//nos. div. by b
    c3=n/(a*b);//nos. div. by both a and b
    cout<<"nNo. of Numbers from 1 to "<<n<<" that are divisible by "<<a<<" and "<<b<<" are: "<<endl;
    cout<<c1+c2-c3;
    return 0;
}