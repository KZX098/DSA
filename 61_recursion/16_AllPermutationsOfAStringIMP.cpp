# include <iostream>
using namespace std;

void permutations(string s, string ans){

    if (s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch=s[i];//fixing a particular letter
        string ros=s.substr(0,i)+s.substr(i+1,s.length());//rest of the string=string before letter at i+letter after letter at i

        permutations(ros,ans+ch);
    }
    
    
}

int main(){
    string s;string ans="";
    cout<<"Enter a string: "<<endl;
    cin>>s;
    permutations(s,ans);
    return 0;
}