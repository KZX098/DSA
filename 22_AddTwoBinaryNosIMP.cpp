#include <bits/stdc++.h>
using namespace std;

int reverse(int n){
    int sum=0;
    while(n>0){
        int lastDigit=n%10;
        sum=sum*10+lastDigit;
        n/=10;
    }
    return sum;
}

int addBinary(int a, int b){
    int sum=0;
    int prevCarry=0;

    while (a>0&&b>0){
        //Case1: When both nos are 0
        if(a%2==0&&b%2==0){
            sum=sum*10+prevCarry;
            prevCarry=0;
        }
        //Case2: When one number is 0 and other is 1
        else if((a%2==0&&b%2==1)||(b%2==0&&a%2==1)){
            if(prevCarry==0){
                sum=sum*10+1;
                prevCarry=0;
            }
            else if(prevCarry==1){
                sum=sum*10+0;
                prevCarry=1;
            }
        }
        //Case3: when both are 1
        else {
            sum=sum*10+prevCarry;
            prevCarry=1;
        }
        a/=10;
        b/=10;
    }

    while (a>0)
    {
        if(prevCarry==1){
            if(a%2==1){
                sum=sum*10+0;
                prevCarry=1;
            }
            else {
                sum=sum*10+1;
                prevCarry=0;
            }
        }
        else if(prevCarry==0){
            
            sum=sum*10+(a%2);
            prevCarry==0;
        }
        a=a/10;
    }
    
    while (b>0)
    {
        if(prevCarry==1){
            if(b%2==1){
                sum=sum*10+0;
                prevCarry=1;
            }
            else {
                sum=sum*10+1;
                prevCarry=0;
            }
        }
        else if(prevCarry==0){
            
            sum=sum*10+(b%2);
            prevCarry==0;
        }
        b/=10;
    }

    //in case when extra carry is generated when both a and b are of equal length
    if(prevCarry==1){
        sum=sum*10+1;
    }
    sum=reverse(sum);
    return sum;
}

int main()
{
    int a,b;
    cout<<"Enter two binary numbers:";
    cin>>a>>b;
    cout <<"Addition:"<< (addBinary(a,b));
    return 0;
}