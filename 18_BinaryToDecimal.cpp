# include <iostream>
using namespace std;

// Function to convert binary to decimal
int BinaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}

int main(){
    int n;
    cout<<"Enter a binary number:";
    cin>>n;
    cout<<"Decimal Equivalent: ";
    cout<<BinaryToDecimal(n)<<endl;
    return 0;
}

//method 2
int main(){
    int n;
    cin>>n;
    int i=0,ans=0;
    while(n!=0){
        int digit=n%10;
        if(digit==1){
            ans=ans+ pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
}