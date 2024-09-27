// Program to count the number of employees and show their details

#include <iostream>
using namespace std;

struct Employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    int num;
    
    cout << "Enter the number of employees: ";
    cin >> num;
    
    Employee employees[num];
    
    for (int i = 0; i < num; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":" << endl;
        cout << "Employee ID: ";
        cin >> employees[i].emp_id;
        cout << "Name: ";
        cin >> employees[i].name;
        cout << "Salary: ";
        cin >> employees[i].salary;
    }

    cout << "\nEmployee Details: " << endl;
    for (int i = 0; i < num; i++) {
        cout << "Employee ID: " << employees[i].emp_id << ", Name: " << employees[i].name << ", Salary: " << employees[i].salary << endl;
    }

    return 0;
}
