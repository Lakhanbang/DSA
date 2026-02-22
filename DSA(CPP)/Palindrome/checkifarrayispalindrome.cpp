#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        if (arr[start] != arr[end]) return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    if (isPalindrome(arr, n)) cout << "Array is Palindrome";
    else cout << "Array is Not Palindrome";
    return 0;
}
