#include<iostream>
using namespace std;

// Beginner level - Question - 03
// Ques 1. Write a C++ program that takes an integer N as input from the user and calculates the sum of the first N natural numbers using a for loop.

// Sample Input:- Enter a number: 5
// Sample Output:- The sum of the first 5 natural numbers is: 15

void sumOfNaturalNum(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = n*(n+1)/2;
    cout << "The sum of first " << n << " Natural number = " << sum << endl;
    cout << endl;
}



// Ques 2. Write a C++ program that takes an integer N as input from the user and calculates the factorial of N using a loop.

// Sample Input:- Enter a number: 4
// Sample Output:- The factorial of 4 is: 24

void factorial(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fact = 1;
    for(int i=2; i<=n; i++){
        fact *= i;
    }
    cout << "Factorial of " << n << " = " << fact << endl;
    cout << endl; 
}


// Ques 3. Write a C++ program that takes an integer N as input from the user and prints the multiplication table of N up to 10 using a loop.

// Sample Input:- Enter a number: 3

// Sample Output:-
// Multiplication table of 3:
// 3 x 1 = 3
// 3 x 2 = 6
// 3 x 3 = 9
// 3 x 4 = 12
// 3 x 5 = 15
// 3 x 6 = 18
// 3 x 7 = 21
// 3 x 8 = 24
// 3 x 9 = 27
// 3 x 10 = 30

void table(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=1; i<=10; i++){
        cout << n << " x " << i << " = " << n*i << endl;
    }
    cout << endl;
}


int main(){
    // QUESTION 1:
    sumOfNaturalNum();

    // QUESTION 2:
    factorial();

    // QUESTION 3:
    table();
}