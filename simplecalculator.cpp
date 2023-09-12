// Simple Calculator
#include <iostream>
using namespace std;
int main()
{
    cout << "\n\n\n\tSimple Calculator" << endl;
    cout << endl;
    int a, b;
    char choice;
    cout << "Enter two numbers:" << endl;
    cin >> a >> b; // taking 2 numbers as input from user
    cout << "Enter the operation you want to perform:" << endl;
    cin >> choice;  // taking choice of operation as input
    switch (choice) // using switch case to display the output
    {
    case '+':
        cout << a << "+" << b << " = " << a + b;
        break;
    case '-':
        cout << a << "-" << b << " = " << (a - b);
        break;
    case '*':
        cout << a << "*" << b << " = " << (a * b);
        break;
    default:
        cout << "Please enter a valid operation"; // default statement when user enters invalid operation
        break;
    }
    return 0;
}