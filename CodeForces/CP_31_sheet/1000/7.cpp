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
        map<int, int> a, b;
        int prev = INT_MIN, cnt = 1;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (x == prev)
                cnt++;
            else
            {
                a[prev] = max(a[prev], cnt);
                prev = x;
                cnt = 1;
            }
        }
        a[prev] = max(a[prev], cnt);
        prev = INT_MAX;
        cnt = 1; 
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (x == prev)
                cnt++;
            else
            {
                b[prev] = max(b[prev], cnt);
                prev = x;
                cnt = 1;
            }
        }
        b[prev] = max(b[prev], cnt);
        int ans = 0;
        for (auto &it : a)
            ans = max(ans, it.second + b[it.first]);
        for (auto &it : b)
            ans = max(ans, it.second + a[it.first]);
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