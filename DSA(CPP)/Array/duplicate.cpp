#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    unordered_set<int> seen, duplicates;

    for (int i = 0; i < n; i++) {
        if (seen.count(arr[i])) duplicates.insert(arr[i]);
        else seen.insert(arr[i]);
    }

    if (duplicates.empty()) cout << "No duplicates found";
    else {
        cout << "Duplicates: ";
        for (int d : duplicates) cout << d << " ";
    }
    return 0;
}
