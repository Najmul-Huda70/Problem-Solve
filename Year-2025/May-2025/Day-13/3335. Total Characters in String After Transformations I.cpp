class Solution {
public:
    const int mod = 1e9 + 7;

    int lengthAfterTransformations(string s, int t) {
        vector<long long> freq(26, 0);  // frequency of each character from 'a' to 'z'

        // Count initial characters
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        // Perform t transformations
        for (int step = 0; step < t; ++step) {
            vector<long long> next(26, 0);

            // All chars from 'a' to 'y' move one letter forward
            for (int i = 0; i < 25; ++i) {
                next[i + 1] = (next[i + 1] + freq[i]) % mod;
            }

            // 'z' turns into 'a' and 'b'
            next[0] = (next[0] + freq[25]) % mod;
            next[1] = (next[1] + freq[25]) % mod;

            freq = next;
        }

        // Calculate final length
        long long ans = 0;
        for (int i = 0; i < 26; ++i) {
            ans = (ans + freq[i]) % mod;
        }

        return (int)ans;
    }
};
