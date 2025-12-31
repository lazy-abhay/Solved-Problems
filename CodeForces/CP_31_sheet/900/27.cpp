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
        int n, x;
        cin >> n >> x;
        int minm = 0, maxm = 0;
        while (n--)
        {
            int y;
            cin >> y;
            minm += y;
            maxm += (y + x - 1) / x;
        }
        cout << (minm + x - 1) / x << ' ' << maxm;
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