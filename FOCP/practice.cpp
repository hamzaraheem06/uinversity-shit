#include<iostream>

using namespace std;
int main() {
    int rows;
    cout << "Enter the number of rows for pattern: ";
    cin >> rows;

    //outer loop ( i ) prints the no rows 
    for (int i = rows; i >= 1; i--) {
        // inner loop ( k ) prints the indentation of the pattern
        for (int k = 1; k <= rows - i; k++) {
            cout << " ";
        }
        // inner loop ( j ) prints the required symbol.
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl; // ends the current line after current line ( i ) has been printed.
    }
    return 0;
}
