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
        int n, q;
        cin >> n >> q;
        vector<int> a(n), b(n);
        for (auto &it : a)
            cin >> it;
        for (auto &it : b)
            cin >> it;
        a[n - 1] = max(a[n - 1], b[n - 1]);
        for (int i = n - 2; i >= 0; --i)
            a[i] = max({a[i], a[i + 1], b[i]});
        vector<int> prefSum(n + 1, 0);
        for (int i = 0; i < n; ++i)
            prefSum[i + 1] = a[i] + prefSum[i];
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << prefSum[r] - prefSum[l - 1] << ' ';
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