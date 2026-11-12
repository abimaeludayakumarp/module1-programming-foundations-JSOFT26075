#include <iostream>
using namespace std;
class rectangle
{
public:
double length;
double breadth;
double area()
{
return length*breadth;
}
double perimeter()
{
    return 2*(length+breadth);
}
};
int main()
{
rectangle r1,r2;
cin>>r1.length;cin>>r1.breadth;
cin>>r2.length;cin>>r2.breadth;
cout<<r1.area()<<endl;
cout<<r2.area()<<endl;
cout<<r2.perimeter()<<endl;
}