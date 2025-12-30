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
        int zero = count(all(arr), 0);
        if (zero == n)
        {
            cout << 0;
            return;
        }
        int l = n, r = -1;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] != 0)
            {
                l = min(l, i);
                r = max(r, i);
            }
        }
        for (int i = l; i <= r; ++i)
            if (arr[i] == 0)
            {
                cout << 2;
                return;
            }
        cout << 1;
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