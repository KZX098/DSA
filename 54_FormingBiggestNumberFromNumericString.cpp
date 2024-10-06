# include <iostream>
# include <string>
# include <algorithm>
using namespace std;
int main(){

    string str="123456789";

    //max number that can be generated from here is 987654321
    //so we can sort the string in descending order

    sort(str.begin(),str.end(),greater<int>()); //greater<int> for descendending order
    return 0;
}