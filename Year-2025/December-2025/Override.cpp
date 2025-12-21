#include <bits/stdc++.h>
using namespace std;
class Vehicle
{
public:
    virtual void move()
    {
        cout << "Genaral Movement..." << endl;
    }
};
class Car : public Vehicle
{
public:
    void move() override
    {
        cout << "Driving on the road..." << endl;
    }
};
int main()
{
    Vehicle *V; // base
    Car a;      // chid
    V = &a;
    V->move();
}