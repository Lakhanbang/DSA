#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    // upper part
    for (int i = 0; i < n; i++) {
        for (int s = 1; s <= n - i - 1; s++) cout << " ";
        char ch = 'A';
        for (int j = 0; j <= i; j++) cout << ch++;
        ch -= 2;
        for (int j = 0; j < i; j++) cout << ch--;
        cout << endl;
    }

    // lower part
    for (int i = n - 2; i >= 0; i--) {
        for (int s = 1; s <= n - i - 1; s++) cout << " ";
        char ch = 'A';
        for (int j = 0; j <= i; j++) cout << ch++;
        ch -= 2;
        for (int j = 0; j < i; j++) cout << ch--;
        cout << endl;
    }

    return 0;
}
