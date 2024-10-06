# include <iostream>
# include <string>
using namespace std;
void replacePi(string s){

    if(s.length()==0){//base case
        return;
    }

    if(s[0]=='p'&&s[1]=='i'){
        cout<<"3.14";
        string rest=s.substr(2);
        replacePi(rest);//calling for rest of the string
    }
    else
    {
        cout<<s[0];
        replacePi(s.substr(1));
    }

}

int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    cin>>s;
    replacePi(s);
    return 0;
}