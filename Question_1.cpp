#include<iostream>
#include<iomanip>
using namespace std;

// Beginner level - Question - 01

// Ques 1. Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.

// Sample Input :- Enter the first string: Hello
// Enter the second string: World

// Sample Output:- Concatenated string: HelloWorld

// SOLUTION:

void Concatination_Of_Two_String(){
    string s1, s2;
    cout << "Enter the first string: ";
    getline(cin, s1);
    cout << "Enter the second string: ";
    getline(cin, s2);
    
    string ans = s1 + s2;
    cout << "Concatenated string: " << ans << endl;
    cout << endl;
}


// Ques 2. Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.

// Sample Input:- Enter grade 1: 85
// Enter grade 2: 90
// Enter grade 3: 78
// Enter grade 4: 92
// Enter grade 5: 88

// Sample Output:- The average grade is: 86.6

// SOLUTION

int Average_Grade(){
    int g1, g2, g3, g4, g5;
    cout << "Enter grade 1: ";
    cin >> g1;
    cout << "Enter grade 2: ";
    cin >> g2;
    cout << "Enter grade 3: ";
    cin >> g3;
    cout << "Enter grade 4: ";
    cin >> g4;
    cout << "Enter grade 5: ";
    cin >> g5;

    double ans = (g1 + g2 + g3 + g4 + g5)/5.0;
    cout << "The average grade is: " << fixed << setprecision(2) << ans << endl;
    cout << endl;
}

// Ques 3. Write a C++ program that takes an integer as input from the user and outputs its square.

// Sample Input:- Enter a number: 7

// Sample Output :- The square of 7 is: 49

// SOLUTION:

void square(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The sqare of " << num << " is: " << num*num << endl;
    cout << endl;
}


int main(){
    
    // Question 1:
    Concatination_Of_Two_String();

    // Question 2:
    Average_Grade();

    // Question 3:
    square();
}