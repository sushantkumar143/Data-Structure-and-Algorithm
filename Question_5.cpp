#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

// Beginner level - Question - 05
// Questions :- Given an array arr[] of n integers where arr[i] represents the number of chocolates in ith packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that:

// Each student gets exactly one packet.
// The difference between the maximum and minimum number of chocolates in the packets given to the students is minimized.
// Examples:

// Input: arr[] = {7, 3, 2, 4, 9, 12, 56}, m = 3
// Output: 2
// Explanation: If we distribute chocolate packets {3, 2, 4}, we will get the minimum difference, that is 2.


// Input: arr[] = {7, 3, 2, 4, 9, 12, 56}, m = 5
// Output: 7
// Explanation: If we distribute chocolate packets {3, 2, 4, 9, 7}, we will get the minimum difference, that is 9 – 2 = 7.


int findMinDifference(std::vector<int>& arr, int n, int m) {
    if (m == 0 || n == 0) return 0; 
    if (n < m) return -1; 

    sort(arr.begin(), arr.end());

    int minDiff = INT_MAX;
    for (int i = 0; i + m - 1 < n; ++i) {
        int diff = arr[i + m - 1] - arr[i];
        minDiff = min(minDiff, diff);
    }

    return minDiff;
}

int main() {
    vector<int> arr = {7, 3, 2, 4, 9, 12, 56};
    int m = 3; 
    int n = arr.size();

    int result = findMinDifference(arr, n, m);
    if (result == -1)
        cout << "Not enough packets for the number of students." << std::endl;
    else
        cout << "Minimum difference is: " << result << std::endl;

    return 0;
}
