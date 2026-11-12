#include <iostream>
using namespace std;
class Student
{
    public:
    int rollNo;
    string name;

    Student()
    {
        rollNo = 0;
        name="NOT ASSIGNED";
        cout<<"Student object created"<<endl;
    }
};
int main()
{
    Student s1;
    Student s2;
    cout<<s1.rollNo<<" "<<s1.name<<endl;
    return 0; 
}