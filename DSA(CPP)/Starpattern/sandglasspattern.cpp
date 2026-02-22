#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // upper inverted triangle
    for (int i = n; i >= 1; i--) {
        for (int s = 0; s < n - i; s++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << endl;
    }

    // lower normal triangle
    for (int i = 2; i <= n; i++) {
        for (int s = 0; s < n - i; s++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << endl;
    }

    return 0;
}
