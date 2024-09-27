// WAP a C++ program to access the array elements using pointers
#include<iostream>
using namespace std;

int main() {
    int arr[5];
    int *ptr = arr;

    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> *(ptr + i);
    }

    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    return 0;
}
