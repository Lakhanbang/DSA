/*Title: Check for Anagram Strings
Problem Description:Given two strings, determine whether they are anagrams of each other.
Two strings are considered anagrams if they contain the same characters with the same frequencies, 
but possibly in a different order. The comparison should be case-sensitive, and spaces are 
considered valid characters. Return "YES" if the strings are anagrams; otherwise, return "NO".

Input Format:
The first line contains a string S1.
The second line contains a string S2.
Output Format:
Print "YES" if S1 and S2 are anagrams.
Otherwise, print "NO".*/

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    string s1;
    cout << "enter first string: ";
    cin>> s1;
    string s2; 
    cout<< "enter second string:";
    cin >> s2;
    if(s1.length() != s2.length()) {
        cout<<"NO"<< endl;
        return 0;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(),s2.end());
    if(s1== s2) cout<<"YES";
    else cout<< "No";

    return 0;
}