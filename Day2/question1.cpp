// WAP a C++ program which will add 2 to distances given in feet and inches
#include<iostream>
using namespace std;

class Distance {
public:
    int feet;
    int inches;

    void addTwo() {
        inches += 2;
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
    }

    void display() {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d;
    cout << "Enter distance (feet and inches): ";
    cin >> d.feet >> d.inches;

    d.addTwo();
    d.display();

    return 0;
}
