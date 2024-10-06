# include "bits/stdc++.h"
# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size(integer): "<<endl;
    cin>>n;
    //cin.ignore();
    char arr[n+1];
    cout<<"Enter a sentence of size entered: "<<endl;
    //cin>>arr;
    cin.ignore();//For clearing of buffer(extra character present)(Here for clearing the newline character after reading n)
    cin.getline(arr,n);//so that spaced strings can also be stored in the same variable

    //Calculating the no. of words(Yippie)
    int i=0;
    int noOfWords=0;
    while (arr[i]!='\0')
    {
        if (arr[i]==' ')
        {
            noOfWords++;
        }
        i++;
    }
    noOfWords+=1;//for last word
    cout<<"No. of words: "<<noOfWords<<endl;
    
    // int j=0;
    // int currLength=0; int maxLength=0;
    // while (1)
    // {
    //     if (arr[j]==' '||arr[j]=='\0')
    //     {
    //         if (currLength>maxLength)
    //         {
    //             maxLength=currLength;
    //         }
    //         currLength=0;
    //     }
    //     else
    //         currLength++;
    //     if (arr[j]=='\0')
    //     {
    //         break;
    //     }
    //     j++;
    // }
    // cout<<"Length of largest word: "<<maxLength<<endl;


    // When a space is encountered, it checks if the current word's length is greater than the previous maximum length
    // and updates it accordingly. After the loop, it also checks if the last word is the longest.
    int j = 0;
    int currLength = 0;//length of the current word
    int maxLength = 0;//maximum length
    int st=0;//starting index of a word
    int maxSt=0;//starting index of longest word
    while (arr[j] != '\0')
    {
        if (arr[j] != ' ')
        {
            currLength++;
        }
        else
        {
            if (currLength > maxLength)
            {
                maxLength = currLength;
                maxSt=st;
            }
            currLength = 0; // Reset current word length
            st=j+1;
        }
        j++;
    }
    // Check for the last word after the loop(IMP)
    if (currLength > maxLength)
    {
        maxLength = currLength;
        maxSt=st;
    }
    cout << "Length of largest word: " << maxLength << endl;

    //displaying longest word
    cout<<"Longest word: ";
    for(int i=0;i<maxLength;i++){
        cout<<arr[i+maxSt];
    }
    return 0;
}