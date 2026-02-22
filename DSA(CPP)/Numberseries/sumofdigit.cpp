#include <iostream>
using namespace std;

int sumDigits(int n) {
    int temp =0;
    while(n>0){
        temp = n%10 + temp;
        n /= 10;
    }
    return temp;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Sum of digits = " << sumDigits(n);
    return 0;
}
