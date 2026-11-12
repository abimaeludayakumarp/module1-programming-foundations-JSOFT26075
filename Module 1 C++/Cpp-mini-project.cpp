#include <iostream>
using namespace std;
class car
{
    public:
    string brand;
    string model;
    int speed;
void accelerate(int amount)
{
    speed=speed+amount;
}
void display()
{
    cout<<brand<<" "<<model<<" "<<speed<<" "<<"km/h"<<endl;
}
};
int main()
{
    car car1;
    car1.brand="BMW";
    car1.model="M5";
    car1.speed=80;

    car1.accelerate(100);
    car1.display();
    
    return 0;

}