class Solution {
public:
    using ll = long long;

    int sumDecoded(vector<long long>& nums) {
        const ll MOD = 1e9 + 7;
        ll ans = 0;

        for (ll num : nums) {

            int width = num % 10;
            ll d = num / 10;

            string s = to_string(d);

            ll x = 0;

            // First width digits -> x
            for (int i = 0; i < width; i++) {
                x = x * 10 + (s[i] - '0');
            }

            // Remaining digits -> y
            ll y = stoll(s.substr(width));

            // x^y % MOD
            ll power = 1;
            ll base = x;

            while (y > 0) {
                if (y & 1)
                    power = (power * base) % MOD;

                base = (base * base) % MOD;
                y >>= 1;
            }

            ans = (ans + power) % MOD;
        }

        return ans;
    }
};