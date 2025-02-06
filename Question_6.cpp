// Questions :- Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// Example 1:

// Input: nums = [1,2,3,1]

// Output: true

// Explanation:

// The element 1 occurs at the indices 0 and 3.


#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> nums;
    for(int i=0; i<n; i++){
        int data;
        cin >> data;
        nums.push_back(data);
    }

    for(int i=0; i<n; i++){
        if(nums[i] == nums[i+1]){
            cout << "True" << endl;
            return 0;
        }
    }

    cout << "False" << endl;
    return 0;
}