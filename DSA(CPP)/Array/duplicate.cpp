#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    bool found = false;
    cout << "Duplicates: ";
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            cout << arr[i] << " ";
            found = true;
            while (i < n - 1 && arr[i] == arr[i+1]) {
                i++;
            }
        }
    }
    if (!found) {
        cout << "No duplicates found";
    }
    return 0;
}
