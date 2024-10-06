//ABC

// C
// B
// BC
// A
// AC
// AB
// ABC
# include <iostream>
# include <string>
using namespace std;
void subseq(string s, string ans){

    if(s.length()==0){//base case
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string ros=s.substr(1);//ros will contain the remaining string after index 1(including it)
    
    subseq(ros,ans);
    subseq(ros,ans+ch);

}

int main(){
    string s;string ans;
    cout<<"Enter a string: "<<endl;
    cin>>s;
    subseq(s,ans);
    return 0;
}