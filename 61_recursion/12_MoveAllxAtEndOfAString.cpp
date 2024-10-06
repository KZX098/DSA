# include <iostream>
# include <string>
using namespace std;
string xAtEnd(string s){

    if(s.length()==0){//base case
        return "";
    }

    char ch=s[0];
    string ans=xAtEnd(s.substr(1));

    if (ch=='x')
    {
        return s.substr(1)+ch;
    }
    else
    {
        return ch+ans;
    }
    
    
}

int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    getline(cin,s);
    cout<<xAtEnd(s);
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
 
// // Function to move all 'x' in the end
// void moveAtEnd(string s, int i, int l)
// {
//     if (i >= l)
//         return;
 
//     // Store current character
//     char curr = s[i];
 
//     // Check if current character is not 'x'
//     if (curr != 'x')
//         cout << curr;
 
//     // recursive function call
//     moveAtEnd(s, i + 1, l);
 
//     // Check if current character is 'x'
//     if (curr == 'x')
//         cout << curr;
 
//     return;
// }
 
// // Driver code
// int main()
// {
//     string s = "xgeekxsforxgexxeksxx";
 
//     int l = s.length();
 
//     moveAtEnd(s, 0, l);
 
//     return 0;
// }