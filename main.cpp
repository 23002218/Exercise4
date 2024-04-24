#include <iostream>

using namespace std;

int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
float division(int, int);

int main()
{

    int choice, num1, num2;
    char cont;

    do {
        cout << "Menu:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        cout << "Enter two integers: ";
        cin >> num1 >> num2;

        switch (choice) {
            case 1:
                cout << "Result: " << addition(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << subtraction(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << multiplication(num1, num2) << endl;
                break;
            case 4:
                if (num2 == 0) {
                    cout << "The second integer is zero, divide by zero." << endl;
                } else {
                    cout << "Result: " << division(num1, num2) << endl;
                }
                break;
            default:
                cout << "Invalid choice." << endl;
        }


            cout << "Press 'y' or 'Y' to continue: ";
        cin >> cont;
    } while (cont == 'y' || cont == 'Y');

    return 0;
    }


    int addition(int a, int b) {
    return a + b;
    }

    int subtraction(int a, int b) {
    return a - b;
    }

    int multiplication(int a, int b) {
    return a * b;
    }

    float division(int a, int b) {
    return (float)a / b;



    return 0;
}
