#include<iostream>
using namespace std;

// Beginner level - Question - 02
// Ques 1. Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.

// Sample Input:- Enter the first number: 10
// Enter the second number: 20
// Enter the third number: 15

// Sample Output :- The largest number is: 20

// SOLUTION:

void Largest_Number(){
    int num1, num2, num3;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    
    if(num1 >= num2 && num1 >= num3){
        cout << "The largest number is: " << num1 << endl;
    }
    else if(num2 >= num1 && num2 >= num3){
        cout << "The largest number is: " << num2 << endl;
    }
    else{
        cout << "The largest number is: " << num3 << endl;
    }
    cout << endl;
}


// Ques 2. Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.
// Grade Criteria:
// A: 90-100
// B: 80-89
// C: 70-79
// D: 60-69
// F: 0-59
// Sample Input:- Enter the score: 85
// Sample Output:- Grade: B

// SOLUTION:

void Grading(){
    int score;
    cout << "Enter the score: " ;
    cin >> score;

    if(score >= 90 && score <= 100){
        cout << "Grade: A" << endl;
    }
    else if(score >= 80 && score <= 89){
        cout << "Grade: B" << endl;
    }
    else if(score >= 70 && score <= 79){
        cout << "Grade: C" << endl;
    }
    else if(score >= 60 && score <= 69){
        cout << "Grade: D" << endl;
    }
    else if(score >= 50 && score <= 59){
        cout << "Grade: E" << endl;
    }
    else if(score >= 0 && score <= 59){
        cout << "Grade: F" << endl;
    }
    else{
        cout << "Invalid Input." << endl;
    }
    cout << endl;
}


// Ques 3. Write a C++ program that takes an integer as input from the user and prints the corresponding month of the year using a switch case statement. Assume 1 = January, 2 = February, ..., 12 = December.If integer is not from 1 to 12 then print invalid.

// Sample Input:-Enter a number : 5
// Sample Output :- The month is: May

void Months_Name(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num == 1){
        cout << "The month is: " << "January"<<endl;
    }
    else if(num == 2){
        cout << "The month is: " << "February"<<endl;
    }
    else if(num == 3){
        cout << "The month is: " << "March"<<endl;
    }
    else if(num == 4){
        cout << "The month is: " << "April"<<endl;
    }
    else if(num == 5){
        cout << "The month is: " << "May"<<endl;
    }
    else if(num == 6){
        cout << "The month is: " << "June"<<endl;
    }
    else if(num == 7){
        cout << "The month is: " << "July"<<endl;
    }
    else if(num == 8){
        cout << "The month is: " << "August"<<endl;
    }
    else if(num == 9){
        cout << "The month is: " << "September"<<endl;
    }
    else if(num == 10){
        cout << "The month is: " << "October"<<endl;
    }
    else if(num == 11){
        cout << "The month is: " << "November"<<endl;
    }
    else if(num == 12){
        cout << "The month is: " << "December"<<endl;
    }
    else{
        cout << "Invalid Month Number."<<endl;
    }
}


int main(){
    // QUESTION 1:
    Largest_Number();

    // QUESTION 2:
    Grading();

    // QUESTION 3:
    Months_Name();
}