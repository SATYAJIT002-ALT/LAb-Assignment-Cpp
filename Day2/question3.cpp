// WAP a C++ program to count number of vowels in a string using switch case
#include<iostream>
using namespace std;

int main() {
    string str;
    int vowelCount = 0;

    cout << "Enter a string: ";
    cin >> str;

    for (char c : str) {
        switch (tolower(c)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowelCount++;
                break;
        }
    }

    cout << "Number of vowels: " << vowelCount << endl;

    return 0;
}
