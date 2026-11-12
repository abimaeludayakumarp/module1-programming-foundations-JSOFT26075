#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << num << " the number is even" << endl;
    else
        cout << num << " the number is odd" << endl;

    return 0;
}