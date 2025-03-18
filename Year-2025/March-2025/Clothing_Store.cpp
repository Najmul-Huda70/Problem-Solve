#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, a, b, c;
        cin >> x >> y >> z >> a >> b >> c;

        // x,y,z,a,b,c
        // 1 2 3 5 0 0
        int n = 0;
        if (z >= c)
        {
            z -= c;
            n += c;
            c = 0;
        }
        else
        {

            n += z;
            c -= z;
            z = 0;
        }
        if (y >= b)
        {
            y -= b;
            n += b;
            b = 0;
        }
        else
        {
            b -= y;
            n += y;
            y = 0;
        }
        if (x >= a)
        {
            x -= a;
            n += a;
            a = 0;
        }
        else
        {
            a -= x;
            n += x;
            x = 0;
        }
        if (c == 0 && z > 0)
        {
            if (z >= b)
            {
                z -= b;
                n += b;
                b = 0;
            }
            else
            {

                n += z;
                b -= z;
                z = 0;
            }

            if (z >= a)
            {
                z -= a;
                n += a;
                a = 0;
            }
            else
            {

                a -= z;
                n += z;
                z = 0;
            }
        }
        if (b == 0 && y > 0)
        {
            if (y >= a)
            {
                y -= a;
                n += a;
                a = 0;
            }
            else
            {
                a -= y;
                n += y;
                y = 0;
            }
        }
        cout << n << endl;
    }
}
