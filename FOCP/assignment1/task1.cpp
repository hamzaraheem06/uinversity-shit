#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers : ";
    cin >> num1 >> num2; // taking two numbers from users for calculating their LCM. 

    int lar_num = (num1 > num2) ? num1 : num2; // LCM of two numbers cannot be less than the largest among them, and cant be greater than product of both numbers

    // LCM would be number that is divisble by both numbers.
    for (int i = lar_num; i <= num1 * num2; i++) {
        //checking if the number is divisble by input numbers.
        if ((i % num1 == 0) && (i % num2 == 0)) {
            cout << "The Least Common Multiple of " << num1 << " and " << num2 << " is " << i;
            break;
        }
    }
    return 0;
}