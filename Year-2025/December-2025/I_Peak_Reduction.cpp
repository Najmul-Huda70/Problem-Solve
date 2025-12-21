#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if ((arr[0] == 1 and arr[n - 1] == 2) or (arr[0] == 2 and arr[n - 1] == 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}