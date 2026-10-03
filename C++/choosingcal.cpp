#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "1. Add\n2. Subtract\n3. Exit\nEnter choice: ";
    cin >> choice;
    switch (choice) {
    case 1: cout << "Addition selected"; break;
    case 2: cout << "Subtraction selected"; break;
case 3: cout << "Exiting"; break;
default: cout << "Invalid choice";
}
}