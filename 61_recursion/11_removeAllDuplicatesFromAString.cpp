# include <iostream>
# include <string>
using namespace std;
string removeDupli(string s){

    if(s.length()==0){//base case
        return "";
    }
    char ch=s[0];
    string s1=removeDupli(s.substr(1));//removing duplicates from rest string
    if (ch==s1[0])
    {
        return s1;
    }
    else
    {
        return ch+s1;
    }
    
}

int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    cin>>s;
    cout<<removeDupli(s);
    return 0;
}