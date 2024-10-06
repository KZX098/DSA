//to print possible combination of letters corresponding to the numbers entered(acc. to mobile phn.)
# include <iostream>
using namespace std;

string keypadArr[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s,string ans){
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    
    char ch=s[0];
    string code=keypadArr[ch-'0'];//[ch-'0'] to convert to int;//now it contains corresponding letters

    string ros=s.substr(1);
    for (int i = 0; i < code.length(); i++)
    {
        keypad(ros,ans+code[i]);//adding corresponding letters of 2 with corresponding letters of 3 in this case
    }
    
    
}
int main(){
    keypad("23","");
    return 0;
}