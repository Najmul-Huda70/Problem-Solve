#include <bits/stdc++.h>
using namespace std;
const float pi = 3.1416;
class Calcualtor
{
public:
    float Area(int a)
    {
        return a * a;
    }
    float Area(int length, int width)
    {
        return length * width;
    }
    float Area(float r)
    {
        return pi * r * r;
    }
};
int main()
{
    Calcualtor calc;
    cout << calc.Area(4) << endl;
    cout << calc.Area(25, 4) << endl;
    cout << calc.Area(12.4f) << endl;
}