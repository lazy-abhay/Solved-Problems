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
        map<int, queue<int>> mp;
        vector<int> arr(n);
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;
            arr[i - 1] = x;
            mp[x].push(i);
        }
        for (auto &it : mp)
        {
            if (it.second.size() == 1)
            {
                cout << -1;
                return;
            }
            int x = it.second.front();
            it.second.pop();
            it.second.push(x);
        }
        for (auto &it : arr)
        {
            cout << mp[it].front() << ' ';
            mp[it].pop();
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