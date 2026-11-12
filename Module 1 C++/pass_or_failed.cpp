#include <iostream> 
using namespace std;
int main()
{

int num;
cout << "enter your marks :";

cin>>num;
if(num>=100)
cout << "passed" << endl;
else if(num <= 40)
cout << "failed" << endl;
else if(num <= 0)
cout << "rejected" << endl;
return 0;
}