/*Title: Move All Zeros to the End
Problem Description: Given an array of integers of size N, move all the zero elements to the end of the array while maintaining the relative order of the non-zero elements.
You must modify the array in-place and print the resulting array.

Input Format: The first line contains a single integer N, representing the number of elements in the array.
The second line contains N space-separated integers representing the elements of the array.

Output Format: Print the modified array in a single line, with elements separated by spaces.

Constraints:
1 ≤ N ≤ 10^5
-10^9 ≤ Ai ≤ 10^9
The solution should run in O(N) time complexity.
Extra space usage should be minimized.
*/

#include<iostream>
using namespace std; 

int main(){
    int n; 
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array:";
    for(int i=0 ; i<n; i++) cin>> arr[i];
    int temp=0;
    for(int i =0; i<n; i++){
        if(arr[i]!= 0){
            arr[temp]= arr[i];
            temp++;
        }
    }
    while(temp<n){
        arr[temp]=0;
        temp++;
    }
    
    for(int i =0; i<n;i++) cout<< arr[i]<<" ";
    return 0;
}