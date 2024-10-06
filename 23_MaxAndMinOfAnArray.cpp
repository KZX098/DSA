# include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number:";
    cin>>n;

    int array[n];

    //Input array elements
    cout<<"Enter "<<n<<" integers:"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    //Output array elements
    cout<<"Numbers are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" "<<endl;
    }

    //Calculating max of all numbers
    int MAX=INT32_MIN; //INT_MIN is a predefined function which returns the minimum of all integers;
    //here we have initialized MAX variable with minimum of all integres so that as soon as condition is checked, MAX value is updated
    int MIN=INT32_MAX; //INT_MAX is a predefined function which returns the maximum of all integers;
    //And if we dont want to use these functions then we can put MAX as a very small value such as -9999999
    
    for(int i=0;i<n;i++){
        if(array[i]>MAX){
            MAX=array[i];
        }
        if(array[i]<MIN){
            MIN=array[i];
        }
    }
    cout<<"Greatest integer is: "<<MAX<<endl;
    cout<<"Smallest integer is: "<<MIN<<endl;

    return 0;
}