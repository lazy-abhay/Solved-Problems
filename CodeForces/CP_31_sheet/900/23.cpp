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
        map<int, int> bit;
        for (auto &it : arr)
        {
            int x = it;
            int pos = 0;
            while (x != 0)
            {
                bit[pos] += (x & 1);
                x /= 2;
                pos++;
            }
        }
        int ans = 0;
        for (auto &it : bit)
            if (it.second == n)
                ans |= (1 << it.first);
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