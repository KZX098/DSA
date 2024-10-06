#include "bits/stdc++.h"
#include <iostream>
using namespace std;

void increment(int q){
    q++;//this will only increase the value of q variable which is local to this function
}

//passing pointers to function
void swap(int*a, int*b)
{
    int temp;
    temp=*a;//a is a pointer which is dereferenced here to get the value of a entered in main function
    *a=*b;
    *b=temp;
}

int main(){
    int q=2;
    increment(q);//pass by value
    cout<<q<<endl;

    int a=1,b=4;
    swap(&a,&b);//pass by reference
    cout<<a<<" "<<b<<endl;
    
    return 0;
}