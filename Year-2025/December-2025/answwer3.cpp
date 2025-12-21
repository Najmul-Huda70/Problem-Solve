#include <bits/stdc++.h>
using namespace std;
class Package
{
public:
    float weight;
    int pricePerKg;
    Package(float w, int price)
    {
        weight = w;
        pricePerKg = price;
    }
    Package(float w)
    {
        weight = w;
        pricePerKg = 50;
    }
    void display()
    {
        cout << "Total Cost: " << weight * pricePerKg << endl;
    }
};
int main()
{
    Package p1(2, 100);
    p1.display();

    Package p2(2);
    p2.display();
}