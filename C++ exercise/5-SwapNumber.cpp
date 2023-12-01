#include <iostream>
using namespace std;
int main() {
    int num1, num2, temp;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Swapping logic
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping, first number is: " << num1 << endl;
    cout << "After swapping, second number is: " << num2 << endl;

    return 0;
}