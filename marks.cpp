#include <iostream>

using namespace std;

int main() {
    int rollNumber;
    float subject1, subject2, subject3, totalMarks, averageMarks;
	cout << "Enter student's roll number: ";
    cin >> rollNumber;
	cout << "Enter marks in subject 1: ";
    cin >> subject1;
	cout << "Enter marks in subject 2: ";
    cin >> subject2;
	cout << "Enter marks in subject 3: ";
    cin >> subject3;
    totalMarks = subject1 + subject2 + subject3;
    averageMarks = totalMarks / 3;
    cout << "\nStudent Roll Number: " << rollNumber << endl;
    cout << "Total Marks: " << totalMarks << endl;
    cout << "Average Marks: " << averageMarks << endl;

    return 0;
}

