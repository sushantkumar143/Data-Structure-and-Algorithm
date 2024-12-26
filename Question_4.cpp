#include<iostream>
using namespace std;

// Beginner level - Question - 04
// Ques 1. Given an array of size N. The task is to find the maximum and the minimum element of the array using the minimum number of comparisons.

// Examples:
// Input: arr[] = {3, 5, 4, 1, 9}
// Output: Minimum element is: 1
// Maximum element is: 9

// Input: arr[] = {22, 14, 8, 17, 35, 3}
// Output: Minimum element is: 3
// Maximum element is: 35. Take all the input from user

int main(){
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of an Array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int mini = arr[0];
    int maxi = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }

    cout << "Minimum element is: " << mini << endl;
    cout << "Maximum element is: " << maxi << endl;

}