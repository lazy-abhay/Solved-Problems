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
        int a, b;
        cin >> a >> b;
        if (b > a)
            cout << 1;
        else if (b == a && b != 1)
            cout << 2;
        else
        {
            int ans = INT_MAX;
            auto solve = [&](int x) -> int
            {
                int temp_b = b + x;
                int temp_a = a;
                int cnt = 0;
                while (temp_a != 0)
                {
                    temp_a /= temp_b;
                    cnt++;
                }
                return cnt + x;
            };
            for (int i = 0; i < 1000; ++i)
                if ((b + i) != 1)
                    ans = min(ans, solve(i));
            cout << ans;
        }
    };

    int T = 1;
    cin >> T;
    for (int t = 1; t <= T; ++t)
    {
        abhay(t);
        cout << endl;
    }
    return 0;
}