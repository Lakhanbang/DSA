/*Title: Left Rotate an Array by K Positions
Problem Description: Given an array of integers of size N, and an integer K, perform a left rotation of the array by K positions.
A left rotation shifts each element of the array to its left by one position. The first element moves to the end of the array. This process is repeated K times.
You must print the resulting array after performing the rotation.

Input Format: The first line contains two space-separated integers N and K.
The second line contains N space-separated integers representing the elements of the array.

Output Format: Print the rotated array elements in a single line separated by spaces.

Constraints:
1 ≤ N ≤ 10^5
0 ≤ K ≤ 10^9
-10^9 ≤ Ai ≤ 10^9
The solution should run in O(N) time complexity.*/

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n; 
    cout << "enter no. of elements:";
    cin>> n; 
    int arr[n];
    cout << "enter elements:";
    for(int i = 0 ;i< n; i++) cin>>arr[i];
    int k ;
    cout << "enter rotation :";
    cin >> k; 
    k = k%n;
    cout<< "after k rotaion: ";
    for (int i=k; i<n; i++)cout<< arr[i]<<" ";
    for (int i=0;i<k ; i++)cout<< arr[i]<< " ";
    return 0;
}