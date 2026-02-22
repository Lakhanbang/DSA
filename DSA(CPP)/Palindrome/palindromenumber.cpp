#include <iostream>
using namespace std;

int main() {
    int n, temp, rev = 0;
    cout << "Enter number: ";
    cin >> n;
    temp = n;

    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    if (rev == n) cout << "Palindrome number";
    else cout << "Not palindrome";
    return 0;
}
