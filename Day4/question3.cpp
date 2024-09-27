// Program to calculate the marks of 10 students from two sections

#include <iostream>
using namespace std;

int main() {
    int section1[5], section2[5];
    int total1 = 0, total2 = 0;
    
    cout << "Enter marks for 5 students in Section 1:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> section1[i];
        total1 += section1[i];
    }

    cout << "\nEnter marks for 5 students in Section 2:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> section2[i];
        total2 += section2[i];
    }

    cout << "\nTotal marks for Section 1: " << total1 << endl;
    cout << "Total marks for Section 2: " << total2 << endl;
    cout << "Overall Total: " << total1 + total2 << endl;

    return 0;
}
