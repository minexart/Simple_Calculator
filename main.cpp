#include <iostream>
#include <cmath>
using namespace std;
/*The calculator functions as a C++ console application which operates through a menu system to execute both basic and advanced math functions. The application enables users to enter two numerical values and select from major mathematical functions which include addition, subtraction, multiplication, division, modulus, power, and average calculation. The system uses functions to handle all operations while it includes input validation which prevents division or modulus operations from executing when zero is used as input. The program shows fundamental programming principles through its implementation of functions and control flow mechanisms and switch statement functionality and user input handling.*/



int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed.\n";
        return 0;
    }
    return (double)a / b;
}
int mod(int a, int b) {
    if (b == 0) {
        cout << "Error: Modulus by zero is not allowed.\n";
        return 0;
    }
    return a % b;
}
double power(int a, int b) {
    return pow(a , b);
}
double average(int a, int b) {
    return ((double)a+b)/2.0;
}

int main() {
    int num1, num2, choice;

    cout << "Enter any 2 numbers: ";
    cin >> num1 >> num2;

    do {
        cout << "\n--- Calculator Menu ---\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Modulus (%)\n";
        cout << "6. Power (^)\n";
        cout << "7. Average (/2)\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;

            case 2:
                cout << "Result: " << subtract(num1, num2) << endl;
                break;

            case 3:
                cout << "Result: " << multiply(num1, num2) << endl;
                break;

            case 4:
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Result: " << mod(num1, num2) <<endl;
                break;
            case 6:
                cout << "Result: " << power(num1, num2) << endl;
                break;
            case 7:
                cout << "Result: " << average(num1, num2) << endl;
                break;

            case 8:
                cout << "Exiting calculator. Goodbye 👋\n";
                break;

            default:
                cout << "Invalid input! Please choose between 1 and 8.\n";
        }

        if (choice != 8) {
            char again;
            cout << "Do you want to enter new numbers? (Y/N): ";
            cin >> again;

            if (again == 'Y' || again == 'y') {
                cout << "Enter new numbers: ";
                cin >> num1 >> num2;
            }
        }

    } while (choice != 8);

    return 0;
}
