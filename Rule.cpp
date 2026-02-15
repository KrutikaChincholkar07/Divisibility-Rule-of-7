#include <iostream>
using namespace std;

int main() {
    int num, temp;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp > 70) {
        int lastDigit = temp % 10;
        temp = temp / 10 - 2 * lastDigit;
    }

    if (temp % 7 == 0)
        cout << num << " is divisible by 7";
    else
        cout << num << " is not divisible by 7";

    return 0;
}
