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
        auto isValid = [&](int x) -> bool
        {
            int y = x;
            while (x != 0)
            {
                if (x % 10 == 0)
                {
                    x /= 10;
                    continue;
                }
                if (y % (x % 10) != 0)
                    return 0;
                x /= 10;
            }
            return 1;
        };
        while (true)
        {
            if (isValid(n))
            {
                cout << n;
                return;
            }
            n++;
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