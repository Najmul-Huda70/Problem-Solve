#include <iostream>
#include <string>
using namespace std;

int min_cost_to_make_good(string s) {
    int cnt_zero = 0, cnt_one = 0;
    
    // Count the number of 0's and 1's in the string
    for (char c : s) {
        if (c == '0') {
            cnt_zero++;
        } else {
            cnt_one++;
        }
    }
    
    // The minimum total cost is the minimum of the number of zeros and ones
    return min(cnt_zero, cnt_one);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << min_cost_to_make_good(s) << endl;
    }
    return 0;
}
