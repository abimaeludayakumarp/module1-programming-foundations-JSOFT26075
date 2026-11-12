#include <iostream>
using namespace std;
class Student
{
    public:
    int rollNo;


    Student(int r)
    {
        rollNo = r;
        
    }
    void display()
    {
        cout<<rollNo<<" "<<name<<endl;
    }
};
int main()
{
    Student s1(54, "Alice");
    Student s2(26, "oline");
    s1.display();
    s2.display();
    return 0; 
}