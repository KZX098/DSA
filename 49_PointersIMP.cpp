//pointer is a variable that stores the address of another variable.
//We can access as well as modify our variable using pointers.
#include "bits/stdc++.h"
#include <iostream>
using namespace std;

int main(){
    int a=10;

    int* aptr=&a;//initialization of aptr pointer with address of a 
    // and int is specifying that pointer for integer type variable is to be made

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;//This is dereferencing, this will print the value at address contained in aptr i.e value of a itself.

    *aptr=20;//changing value of a through its pointer
    cout<<a<<endl;


    //pointer arithmetic(++,--,+,-)
    aptr++;
    cout<<aptr<<endl;//this will return the address=address+4(coz int stores 4 bytes)


    //pointers and arrays
    int arr[]={1,2,3,4};
    cout<<*arr<<endl;//this will return the first element of array(as the address of array is its first element)

    //for accessing array elements using pointers
    int* ptr=arr;//creating a pointer storing address of the array(an array itself contains its address thats why no need of &)
    for (int i = 0; i < 3; i++)
    {
        cout<<*ptr<<endl;//or cout<<*arr<<endl;
        ptr++;//but arr++ could not be done(so we will cout *(arr+i) above)
        
    }
    

    //pointer to pointer
    int p=11;
    int*ptr1=&p;
    int**ptr2=&ptr1;

    cout<<p<<endl;//value of p
    cout<<ptr1<<endl;//value of ptr1 i.e. address of variable p
    cout<<*ptr1<<endl;//value at address in ptr1 i.e.value of p
    cout<<ptr2<<endl;//value of ptr2 i.e. address of pointer ptr1
    cout<<*ptr2<<endl;//value at address in ptr2 i.e. value of ptr1 i.e address of p  
    cout<<**ptr2<<endl;//value at address in adress of ptr2 i.e. value at address at ptr1 i.e value of p 

    return 0;
}