//string is not static(size not fixed)
//many functions could be used for operations to be easier
//contains a terminating character

# include <iostream>
# include <string>
# include <algorithm>//to use sort
using namespace std;
int main(){

    string str;//declarartion of a string
    cin>>str;//input of string without spaces of anysize 
    cout<<str<<endl;

    // string str1(5,'n');// a string is declared which contains 5 times n
    // cout<<str1<<endl;

    string str2="HarshitaJaiswal";
    cout<<str2<<endl;

    // string str3;
    // getline(cin, str3);//string with spaces entered by user is stored in srt3
    // cout<<str3<<endl;


    //some functions in string

    // str.append(str2);//this will add str2 string to str1 string.(append-->str=str+str2)
    // cout<<str<<endl;

    cout<<str+str2<<endl;//no change in str or str2

    cout<<str[4]<<endl;//4th character of str

    //str2.clear();//this will clear all elements of the string str.

    string s1="abc";
    string s2="123";

    cout<<s1.compare(s2)<<endl;//Returns:
    // 0 : if both strings are equal.
    // A value < 0 : if *this is shorter than str or,
    // first character that doesn't match is smaller than str.
    // A value > 0 : if *this is longer than str or,
    // first character that doesn't match is greater

    // clear() is used to remove the entire contents of the string (but not its capacity).
    // erase() is used to remove some specified characters from the string. 
    cout<<s1.erase(1,2)<<endl;//will remove three elements starting from index 1

    // cout<<s1.find("bc")<<endl;//this will return the starting index of bc if it exists oyherwise garbage value

    cout<<s1.insert(1,"BC")<<endl;//this will insert BC at second position

    cout<<s1.size()<<endl; //or s1.length() //will return the length of the string

    string s=s1.substr(2,1);
    cout<<s<<endl;//will return the substring(of 2 characters) of s1 starting from index 3

    string a="786";
    int x=stoi(a);//will convert string to integer
    cout<<x+2<<endl;

    int y=123;
    string b=to_string(y);
    cout<<b<<endl;

    string abc="aqwertyuiop";
    sort(abc.begin(),abc.end());//will sort lexixographically(alphabetically)
    cout<<abc<<endl;

    //string ros=s.substr(1);//ros will contain the remaining string after index 1

    return 0;
}