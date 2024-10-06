# include <iostream>
# include <string>
# include <algorithm>
using namespace std;
int main(){

    string str="abcdefghijklmnopqrstuvwxyz";
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i]>='a'&&str[i]<='z')//checking for lowercase letters
    //     {
    //         str[i]-=32;//covert to uppercase(difference between uppercase and lowercaase is 32)
    //     }
    // }
    // cout<<str<<endl;

    transform(str.begin(),str.end(),str.begin(),::toupper);//(traversing a string from beginning to end then to uppercase from beginning)
    cout<<str<<endl;
    
    return 0;
}