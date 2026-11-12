#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int subtract(int a,int b)
{
    return a - b;
}
double divide(double a,double b)
{
    return a / b;
}
int multiplication(int a,int b)
{
    return a * b;
}
int remainder(int a,int b)
{
    return a % b;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers:  ";
    cin>>a>>b;
    cout<<"Addition= " <<add(a,b)<< endl;
    cout<<"Subtraction="<<subtract(a,b)<<endl;
    cout<<"Multiplication="<<multiplication(a,b)<<endl;
    cout<<"Division="<<divide(a,b)<<endl;
    cout<<"remainder="<<remainder(a,b)<<endl;
    return 0;
}