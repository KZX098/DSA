#include <iostream>
using namespace std;

int main() {
    int rupees, noOfChoco, wrappers;
    cout << "Enter rupees you have to buy chocolates: " << endl;
    cin >> rupees;
    noOfChoco = rupees;
    wrappers = noOfChoco;

    while (wrappers >= 3) {
        int newChoco = wrappers / 3;  // Chocolates obtained from wrappers
        noOfChoco += newChoco;        // Adding new chocolates to the total
        wrappers = newChoco + wrappers % 3;//(new chocolate wrappers + leftout wrappers) // New wrappers count
    }

    cout << "Total maximum no. of chocolates you can buy with your amount and wrappers are " << noOfChoco << endl;
    return 0;
}
