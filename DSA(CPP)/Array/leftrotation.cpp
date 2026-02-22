#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter k (rotation steps): ";
    cin >> k;
    k = k % n;

    cout << "After Left Rotation: ";
    for (int i = k; i < n; i++) cout << arr[i] << " ";
    for (int i = 0; i < k; i++) cout << arr[i] << " ";
    return 0;
}
