/*Title: Check if a Number is a Palindrome
Problem Description: Given an integer `N`, determine whether it is a palindrome.
An integer is considered a palindrome if it reads the same backward as forward. Negative numbers are not considered palindromes.
Print `"YES"` if the number is a palindrome; otherwise, print `"NO"`.

Input Format:
* A single integer `N`.

Output Format:
* Print `"YES"` if `N` is a palindrome.
* Otherwise, print `"NO"`.
Constraints:
* -10^9 ≤ N ≤ 10^9
* The solution should not use string conversion (integer-based approach is expected in interviews).
*/

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n; 
    cout << "enter no.:";
    cin>> n; 
    int temp;
    temp = n; 
    int rev = 0;
    while (temp>0){
        rev = rev*10 +(temp%10);
        temp =temp/10;
    }
    if(rev == n) cout <<"YES";
    else cout<< "NO";
    return 0;
}