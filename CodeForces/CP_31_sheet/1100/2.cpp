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
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (auto &it : a)
            cin >> it;
        for (auto &it : b)
            cin >> it;
        int sum = 0, maxm = 0;
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += a[i];
            if ((k - (i + 1)) > 0)
                maxm = max(maxm, b[i]);
            if ((k - i) > 0)
                ans = max(ans, sum + maxm * (k - (i + 1)));
        }
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