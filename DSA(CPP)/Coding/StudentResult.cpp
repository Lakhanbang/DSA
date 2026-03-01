/*
Title: Student Result Evaluation System
Problem Description: You are required to design a simple student result evaluation system.
Given the details of `N` students, each student has a name and marks obtained in three subjects. Your task is to:
1. Calculate the average marks of each student.
2. Determine whether the student has passed or failed.
A student is considered **Pass** only if they score **at least 40 marks in each of the three subjects**. Otherwise, the student is considered **Fail**.
For each student, print their name, average marks, and result status.

Input Format:
* The first line contains a single integer `N`, representing the number of students.
* The next `N` lines each contain:
* A string `Name` (without spaces), followed by
* Three integers `A`, `B`, and `C`, representing marks in three subjects.

Output Format: For each student, print a single line containing:
`Name Average Result`
Where:
* `Name` is the student's name.
* `Average` is the average of the three marks (printed as a floating-point number).
* `Result` is either `Pass` or `Fail`.
Each student’s result should be printed in the same order as the input.
Constraints:

* 1 ≤ N ≤ 10^5
* 0 ≤ A, B, C ≤ 100
* Student name contains only alphabetic characters and has no spaces.
* The average should be computed using floating-point division.

Example:

Sample Input:
3
Rahul 50 60 70
Anita 35 80 90
Karan 40 40 40

Sample Output:
Rahul 60 Pass
Anita 68.3333 Fail
Karan 40 Pass

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int n1=n;
    string names[n];
    float avg[n];
    bool ispass[n]; int i =0;
    while(n>0){
        string name; int a, b,c;
        cin>> name >> a >> b >>c;
        float average = (a+b+c)/3.0;
        names[i] = name;
        avg[i]= average;
        if(a>=40 && b>=40 && c>=40){
            ispass[i]= true;
        }
        else ispass[i] =false;
        i++;
        n--;
    }
    for(int j=0 ;j<n1; j++){
        cout<< names[j]<< " "<< avg[j]<< " "<< (ispass[j]? "Pass": "Fail")<< endl;
    }
    return 0;
}