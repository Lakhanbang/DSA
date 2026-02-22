#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n)
                cout << ch << " ";
            else
                cout << "  ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}
