#include <iostream>
using namespace std;
int main()
{
    int a ,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if(a>b)
    cout<<a<<" is the largest no";
    else if(b>a)
    cout<<b<<" is the largest no";
    else
    cout<<"both are equal";
}