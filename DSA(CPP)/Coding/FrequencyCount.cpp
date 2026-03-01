/*Title:Frequency of Each Element in an Array

Problem Description:Given an array of integers, your task is to count the frequency of each distinct element in the array.
For every unique element, print the element along with the number of times it appears in the array. The elements must be printed in the order of their first occurrence in the input array.

Input Format:The first line contains a single integer N, representing the number of elements in the array.
The second line contains N space-separated integers representing the array elements.

Output Format:For each distinct element, print a single line containing two space-separated values:
Element Frequency
The order of output should follow the first appearance of each element in the array.

Constraints:
1 ≤ N ≤ 10^5
-10^9 ≤ Ai ≤ 10^9
The solution should run efficiently for large inputs (expected time complexity O(N)).*/

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
    sort(arr, arr+n);
    int count = 1;
    for (int i =0; i<n; i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            cout<< arr[i]<< " "<< count<< endl;
            count = 1;
        }
    }
    return 0;
}