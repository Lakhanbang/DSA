/*Title: Find the Missing Number in an Array
Problem Description: You are given an array of size N-1 that contains distinct integers from 1 to N. Exactly one number from this range is missing.
Your task is to find and print the missing number.
The solution should be efficient and handle large input sizes within the given constraints.

Input Format: The first line contains a single integer N.
The second line contains N-1 space-separated integers representing the array elements.

Output Format: Print a single integer representing the missing number.

Constraints:
2 ≤ N ≤ 10^5
The array contains distinct integers in the range 1 to N.
Exactly one number is missing.
The solution should run in O(N) time complexity and use O(1) extra space.
*/

#include<iostream>
using namespace std; 

int main(){
   int n; 
   cout<< "enter the size of array:";
   cin >> n;
   int arr[n-1];
   cout<<"enter the elements in array:";
   for (int i=0; i<n-1; i++)cin>> arr[i];
   int actualSum=0;
   int expectedSum = n*(n+1)/2;
   for(int i = 0; i<n-1; i++){
       actualSum += arr[i];
   }
   int missingval = expectedSum - actualSum;
   cout<< missingval;
    return 0;
}