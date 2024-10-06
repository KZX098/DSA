//first call for the rest of the elements then print while returning
# include <iostream>
# include <string>
using namespace std;
void reverse(string s){

    if(s.length()==0){//base case
        return;
    }

    string ros=s.substr(1);//ros will contain the remaining string after index 1
    reverse(ros);
    cout<<s[0];
}

int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    cin>>s;
    reverse(s);
    return 0;
}