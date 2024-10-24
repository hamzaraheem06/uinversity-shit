#include<iostream>
#include "hamza"
#include<cmath>
using namespace std;

int main() {
    string boy = "Hamza";
    string& abdulraheemkabeta = boy;
    // we are storing boy's reference in abdulraheemkabeta, so if we assign any value or change it, this will change the value in boy; 
    cout << boy;
    abdulraheemkabeta = "Hamza Raheem";
    cout << boy;

    return 0;
}