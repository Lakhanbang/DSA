#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, rev = "";
    cout << "Enter string: ";
    cin >> s;

    for (int i = s.length() - 1; i >= 0; i--)
        rev += s[i];

    if (rev == s)
        cout << "Palindrome string";
    else
        cout << "Not palindrome";

    return 0;
}
