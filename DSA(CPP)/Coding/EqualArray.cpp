/*Title: Check if Two Arrays are Equal
Problem Description: Given two arrays of integers of size N, determine whether both arrays contain the same elements with the same frequencies, regardless of their order.
Return "YES" if both arrays are equal in terms of elements and their counts. Otherwise, return "NO".

Input Format: The first line contains a single integer N, representing the size of the arrays.
The second line contains N space-separated integers representing the first array.
The third line contains N space-separated integers representing the second array.

Output Format: Print "YES" if the arrays are equal.
Otherwise, print "NO".

Constraints:
1 ≤ N ≤ 10^5 
-10^9 ≤ Ai ≤ 10^9
The solution should run in O(N log N) time or better.
*/

#include<iostream>
#include<algorithm>
using namespace std; 

int main(){
   int n; 
   cin >> n;
   int arr1[n];
   for (int i = 0; i < n; i++)
       cin >> arr1[i];
   int arr2[n];
   for (int i = 0; i < n; i++)
       cin >> arr2[i];
   sort(arr1, arr1 + n);
   sort(arr2, arr2 + n);
   for (int i = 0; i < n; i++){
       if(arr1[i] != arr2[i]){
           cout << "NO";
           return 0;
       }
   }
   cout << "YES";
   return 0;
}