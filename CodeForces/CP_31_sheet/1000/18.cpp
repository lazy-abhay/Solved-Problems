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
        int w, h;
        cin >> w >> h;
        int n;
        cin >> n;
        int l = 0, r = 0, ans = 0;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            if (i == 0)
                l = a;
            if (i == (n - 1))
                r = a;
        }
        ans = max(ans, 1LL * (r - l) * h);
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            if (i == 0)
                l = a;
            if (i == (n - 1))
                r = a;
        }
        ans = max(ans, 1LL * (r - l) * h);
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            if (i == 0)
                l = a;
            if (i == (n - 1))
                r = a;
        }
        ans = max(ans, 1LL * (r - l) * w);
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            if (i == 0)
                l = a;
            if (i == (n - 1))
                r = a;
        }
        ans = max(ans, 1LL * (r - l) * w);
        cout << ans;
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