#include <iostream>
using namespace std;

int main() {
    int n, num = 1;
    cout << "Enter size (>=3): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "* ";
            else
                cout << num++ << " ";
        }
        cout << endl;
    }
    return 0;
}
