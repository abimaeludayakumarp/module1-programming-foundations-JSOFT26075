#include <iostream>
using namespace std;
int main()
{
int age;
double mark; 
cout << "Enter your age:";
cin >> age;
cout << "Enter your mark:";
cin >> mark;
cout << "percentage:" << mark / 5.0 << "%" << endl;
return 0;
}