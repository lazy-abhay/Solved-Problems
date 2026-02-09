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
        map<int, vector<int>> mp;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (x % k == 0)
                cout << i + 1 << ' ';
            else
                mp[-(x % k)].push_back(i + 1);
        }
        for (auto &it : mp)
        {
            for (auto &itt : it.second)
                cout << itt << ' ';
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