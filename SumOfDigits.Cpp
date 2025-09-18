#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, digit;

    cout << "Enter a Number: ";
    cin >> num;

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    cout << "Sum of digits is " << sum << endl;

    return 0;
}
