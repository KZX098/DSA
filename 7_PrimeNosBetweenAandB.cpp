// # include <iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int num;
//     for(num=a;num<=b;num++)
//     {
//         int i;
//         for(i=2;i<num;i++){
//             if(num%i==0){
//                 break;
//             }
//         }
//         if(i==num){
//             cout<<num<<endl;
//         }
//     }
//     return 0;
// } 



//Using functions
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false; // Found a divisor, not prime
        }
    }
    
    return true; // No divisors found, prime number
}

int main() {
    int a, b;
    cout<<"Enter two numbers:";
    cin >> a >> b;
    
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            cout << "Prime numbers between "<<a<<"and"<<b<<"are ";
            cout<<i << endl;
        }
    }
    
    return 0;
} 