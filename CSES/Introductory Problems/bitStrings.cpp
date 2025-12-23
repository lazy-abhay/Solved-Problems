#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int32_t main(void)
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    auto abhay = [&](int __t) -> void
    {
        int n;
        cin >> n;
        int MOD = 1e9 + 7;
        auto binPow = [&](auto &self, int x, int y) -> int
        {
            if (y == 0)
                return 1;
            int temp = self(self, x, y / 2);
            temp = (temp * temp) % MOD;
            if (y & 1)
                temp = (temp * x) % MOD;
            return temp % MOD;
        };
        cout << binPow(binPow, 2, n);
    };

    int T = 1;
    // cin >> T;
    for (int t = 1; t <= T; ++t)
    {
        abhay(t);
        cout << endl;
    }
    return 0;
}