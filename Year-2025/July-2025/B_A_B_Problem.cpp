#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << int(a / b) << " " << a % b << " ";
    float div = (float)a / b;
    printf("%.5f", div);
}