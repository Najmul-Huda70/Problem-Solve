#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    void input(int r, int i)
    {
        real = r;
        img = i;
    }
    Complex operator+(const Complex najmul)
    {
        Complex res;
        res.real = real + najmul.real;
        res.img = img + najmul.img;
        return res;
    }
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};
int main()
{
    Complex c1, c2;
    c1.input(4, 2);
    c1.display();
    c2.input(5, 2);
    c2.display();
    Complex c3 = c1 + c2;
    c3.display();
}