#include<iostream>

using namespace std;

int add(int num1, int num2) {
    return num1 + num2;
} // function to return the sum of two numbers

int subtract(int num1, int num2) {
    return num1 - num2;
} // function to return the subtraction of two numbers

int multiply(int num1, int num2) {
    return num1 * num2;
} // function to return the product of two numbers

float divide(float num1, float num2) {
    return (num1 / num2);
} // function to return the quotient value of two numbers

int remainder(int num1, int num2) {
    return num1 % num2;
} // function to return the remainder of two numbers

long double exponentiation(int num1, int num2) {
    int exponent = 1;
    for (int i = 1; i <= num2; i++)
        exponent *= num1;
    return exponent;
} // function to return value of first number raised to power of second number

void getNumbers(int& num1, int& num2) { // passing the reference of num1, and num2 so that the changes are made in the original variables and not the copies or formal variables.
    do {
        cout << "Enter new numbers : ";
        cin >> num1 >> num2;
        cout << "First Number = " << num1 << ", Second Number = " << num2 << endl;
    } while (num1 == 0 && num2 == 0); // do while make sures that the input numbers are not both zero. If they are zero, it will run till eventually one of the number is non-zero
} // function to get input numbers

int main() {
    int num1 = 0, num2 = 0;
    cout << "First Number = " << num1 << ", Second Number = " << num2 << endl;


    cout << "n- Enter new numbers\n\na- Addition\ns- Subtraction\nm- Multiplicaton\nd- Division\nr- Remainder\ne- Exponentiation\n\nx- Exit Program" << endl; // display our menu / options list

    char userChoice;

    while (true) { // while loop is set to infinite so that the user can decide when he wants to exit.
        cout << "Select an option: ";
        cin >> userChoice; // taking the userChoice i.e. the operation user wants to perform

        // checking if the variables are not un-initialized, and if the user want to enter values or exit the program.
        if (num1 == 0 && num2 == 0 && userChoice != 'n' && userChoice != 'x') {
            cout << "Enter numbers first." << endl;
            continue;
        }

        switch (userChoice) { // self-explainatory switch statement and its cases
        case 'n':
            getNumbers(num1, num2);
            break;
        case 'a':
            cout << "The sum of " << num1 << " and " << num2 << " is " << add(num1, num2) << endl;
            break;
        case 's':
            cout << "The subtraction of " << num1 << " from " << num2 << " is " << subtract(num1, num2) << endl;
            break;
        case 'm':
            cout << "The product of " << num1 << " and " << num2 << " is " << multiply(num1, num2) << endl;
            break;
        case 'd':
            cout << "The quotient of " << num1 << " by " << num2 << " is " << divide(num1, num2) << endl;
            break;
        case 'r':
            cout << "The remainder of " << num1 << " after dividing by " << num2 << " is " << remainder(num1, num2) << endl;
            break;
        case 'e':
            cout << "The exponent of " << num1 << " raised to power " << num2 << " is " << exponentiation(num1, num2) << endl;
            break;
        case 'x':
            return 0; // if the user enters 'x' the program returns 0 to main function, i.e. exit the main function.
        }
    }
    return 0;
}