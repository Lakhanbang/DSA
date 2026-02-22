#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) cout << " ";

        if (i % 2 == 1) { // odd rows → numbers
            for (int j = 1; j <= i; j++) cout << j << " ";
        } else {          // even rows → alphabets
            char ch = 'A';
            for (int j = 1; j <= i; j++) cout << ch++ << " ";
        }
        cout << endl;
    }
    return 0;
}
