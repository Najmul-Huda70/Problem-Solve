#include <iostream>
#include <algorithm>
using namespace std;

string biggerIsGreater(string w) {
    int n = w.length();
    
    int i = n - 2;
    while (i >= 0 && w[i] >= w[i + 1]) {
        i--;
    }
    
    if (i == -1) {
        return "no answer";
    }
    
   int j = n - 1;
    while (w[j] <= w[i]) {
        j--;
    }
    
   swap(w[i], w[j]);
    
   reverse(w.begin() + i + 1, w.end());
    
    return w;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string w;
        cin >> w;
        cout << biggerIsGreater(w) << endl;
    }
    return 0;
}
