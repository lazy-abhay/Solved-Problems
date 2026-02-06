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
        int n, p;
        cin >> n >> p;
        vector<pair<int, int>> arr(n);
        for (auto &it : arr)
            cin >> it.second;
        for (auto &it : arr)
            cin >> it.first;
        sort(all(arr), [&](const auto &a, const auto &b)
             {
            if (a.first == b.first)
                return a.second > b.second;
            return a.first < b.first; });
        deque<pair<int, int>> dq;
        for (auto &it : arr)
            dq.push_back(it);
        int ans = p;
        pair<int, int> next = dq.front();
        while (1)
        {
            dq.pop_front();
            auto curr = next;
            if (dq.size() > 0)
            {
                next = dq.front();
                ans += min(curr.first, p);
                curr.second--;
            }
            while (curr.second > 0 && dq.size() > 1)
            {
                ans += min(curr.first, p);
                dq.pop_back();
                curr.second--;
            }
            if (dq.size() == 0)
                break;
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