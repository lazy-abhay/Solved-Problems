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
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        map<int, int> query;
        for (int i = 0; i < q; ++i)
        {
            int x;
            cin >> x;
            if (query.find(x) == query.end())
                query[x] = i;
        }
        vector<pair<int, int>> temp;
        for (auto &it : query)
            temp.push_back({it.second, it.first});
        sort(all(temp));
        for (auto &it : arr)
        {
            int x = it;
            for (auto &itt : temp)
            {
                if (x % (1LL << itt.second) == 0)
                    x += (1LL << (itt.second - 1));
            }
            cout << x << ' ';
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