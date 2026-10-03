#include <iostream>
using namespace std;

int main()
{
    int age;
    double marks;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    cout << "You are " << age << " years old. "
         << "I got " << marks << " marks on this semester." << endl;

    return 0;
}