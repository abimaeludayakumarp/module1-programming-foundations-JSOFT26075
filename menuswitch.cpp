#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "1 Pizza  2 Burger  3 Pasta  4 Exit\n";
    cin  >> choice;
 
switch (choice)
{
    case 1: cout << "Pizza";   break;
    case 2: cout << "Burger";  break;
    case 3: cout << "Pasta";   break;
    case 4: cout << "Goodbye"; break;
    default: cout << "Invalid choice";
}
}
