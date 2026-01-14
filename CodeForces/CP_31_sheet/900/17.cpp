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
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        map<int, int> mp;
        for (auto &it : arr)
            mp[it]++;
        int num = 0, maxm = 0;
        for (auto &it : mp)
            if (it.second > maxm)
            {
                maxm = it.second;
                num = it.first;
            }
        int ans = 0;
        while (maxm < n)
        {
            ans++;
            ans += min(maxm, n - maxm);
            maxm *= 2;
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