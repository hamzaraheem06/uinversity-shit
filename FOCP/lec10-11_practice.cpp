#include<iostream>

using namespace std;
int main() {
    int n, sum = 0;
    do {
        cout << "Enter a positive integer : ";
        cin >> n;
    } while (n <= 0);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "The sum of positive integers till " << n << " is: " << sum;
    return 0;
}

