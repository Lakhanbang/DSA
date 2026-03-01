/*Title: Remove Duplicate Elements from an Array

Problem Description:
Given an array of integers, remove all duplicate elements while preserving the order of their first occurrence.
You must print the resulting array containing only distinct elements in the same order as they first appeared in the input.

Input Format:
The first line contains a single integer N, representing the number of elements in the array.
The second line contains N space-separated integers representing the array elements.
Output Format:
Print the distinct elements of the array in a single line, separated by spaces, maintaining their original order of appearance.

Constraints:
1 ≤ N ≤ 10^5
-10^9 ≤ Ai ≤ 10^9
The solution should run efficiently for large inputs. 
*/

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n ; 
    cout<< "enter size of array: ";
    cin >>n;
    int arr[n];
    cout<<"enter elements in array: ";
    for (int i=0 ; i<n;i++) cin >> arr[i];
    sort(arr, arr +n);
    vector<int> dupp ;
    for (int i=0; i<n ; i++) {
       dupp.push_back(arr[i]);
        if(arr[i]==arr[i+1]) i++;
    }
    for (int x : dupp) {
        cout << x << " ";
    }
    return 0;
}