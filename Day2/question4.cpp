// WAP a C++ program to implement Adamas University semester marking system
#include<iostream>
using namespace std;

class Student {
public:
    int marks[5];
    double total = 0;

    void inputMarks() {
        for (int i = 0; i < 5; i++) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }
    }

    void displayGrade() {
        double average = total / 5;
        cout << "Total Marks: " << total << endl;
        cout << "Average: " << average << endl;

        if (average >= 90)
            cout << "Grade: A" << endl;
        else if (average >= 80)
            cout << "Grade: B" << endl;
        else if (average >= 70)
            cout << "Grade: C" << endl;
        else if (average >= 60)
            cout << "Grade: D" << endl;
        else
            cout << "Grade: F" << endl;
    }
};

int main() {
    Student s;
    s.inputMarks();
    s.displayGrade();

    return 0;
}
