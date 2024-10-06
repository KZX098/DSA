//XOR gives output 0 when the numbers are same
//First we will XOR all the elements then we will find the position at which rightmost bit is set then we will select the elemnts containing rightmost bit set at that position to find out one of our unique number and to find out the other we will XOR it with XORsum.
# include <iostream>
using namespace std;

int setbit(int n, int pos){//set means to make it 1
    return ((n&(1<<pos))!=0);
}

void unique(int arr[],int n){
    int xorSum=0;//XOR of all elements
    for (int i = 0; i < n; i++)
    {
        xorSum=xorSum^arr[i];
    }
    //after XORing to find the position at which bit is set in the number we get
    int tempXOR=xorSum;
    int setBit=0;
    int pos=0;
    while (setBit!=1)
    {
        setBit=xorSum&1;//to get the last bit of xorSum
        pos++;//position at which we are getting 1
        xorSum=xorSum>>1;//to traverse the bits
    }
    int newXOR=0;
    int secUnique;
    for (int i = 0; i < n; i++)
    {
        if (setbit(arr[i],pos-1))
        {
            //This is one of the unique nos.
            newXOR=newXOR^arr[i];//XOR of all those elements containing set bit at that position as of XORsum 
        }
    }
    //Another unique no.
    secUnique=tempXOR^newXOR;

    cout<<newXOR<<endl;
    cout<<secUnique<<endl;
}

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements:"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Unique numbers: "<<endl;
    unique(arr,n);

    return 0;
}