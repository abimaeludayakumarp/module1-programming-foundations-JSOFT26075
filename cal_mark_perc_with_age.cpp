#include <iostream>
using namespace std;

int main()
{
    int age;
    string name;
    double marks;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    cout << "Your name is " << name
         << " and your age " << age
         << " and your marks " << marks << endl;

    cout << "Percentage: " << marks / 5.0 << "%" << endl;

    return 0;
}