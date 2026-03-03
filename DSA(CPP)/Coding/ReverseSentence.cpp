/*Reverse Words in a Sentence
Problem Description: Given a string S representing a sentence consisting of words separated by single spaces, reverse the order of the words in the sentence.
A word is defined as a sequence of non-space characters. The words themselves should remain unchanged, but their order must be reversed.
You must print the modified sentence.

Input Format: A single line containing the string S.

Output Format: Print the sentence with the order of words reversed.

Constraints:
1 ≤ length of S ≤ 10^5
The string contains only English letters (both uppercase and lowercase) and single spaces between words.
There are no leading or trailing spaces. 
*/


#include<iostream>
#include<string>
using namespace std;
int main(){
    string S;
    getline(cin, S);
    int n = S.length();
    string word = "";
    for(int i = n - 1; i >= 0; i--){
        if(S[i] != ' '){
            word = S[i] + word;
        }
        else{
            cout << word;
            word = " ";
        }
    }
    cout << word;
    return 0;
}