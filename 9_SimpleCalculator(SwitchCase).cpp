#include <iostream>
using namespace std;

int main()
{
    char c;
    int a, b, sum = 0, sub, mult, divi, rem;

    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    cout << "Enter the operator: " << endl;
    cin >> c;

    switch (c)
    {
    case '+':
        sum = a + b;
        cout << "Sum: " << sum << endl;
        break;
    case '-':
        sub = a - b;
        cout << "Subtraction: " << sub << endl;
        break;
    case '*':
        mult = a * b;
        cout << "Multiplication: " << mult << endl;
        break;
    case '/':
        if (b != 0) {
            divi = a / b;
            cout << "Division: " << divi << endl;
        } else {
            cout << "Division by zero is not allowed!" << endl;
        }
        break;
    case '%':
        rem = a % b;
        cout << "Remainder: " << rem << endl;
        break;
    default:
        cout << "Invalid input!!" << endl;
        break;
    }
    return 0;
}





