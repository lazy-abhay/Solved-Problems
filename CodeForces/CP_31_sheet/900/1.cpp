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
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;
        vector<pair<int, int>> arr = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};
        set<pair<int, int>> q;
        set<pair<int, int>> ans;
        for (auto &it : arr)
            q.insert({xq + it.first, yq + it.second});
        for (auto &it : arr)
            if (q.count({xk + it.first, yk + it.second}))
                ans.insert({xk + it.first, yk + it.second});
        cout << (int)ans.size();
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