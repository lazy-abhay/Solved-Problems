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
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        int st = 0, en = 1e12;
        int ans = 0;
        auto isValid = [&](int mid) -> int
        {
            int water = 0;
            for (auto &it : arr)
                water += max(0LL, mid - it);
            return water <= x;
        };
        while (st <= en)
        {
            int mid = st + (en - st) / 2;
            if (isValid(mid))
            {
                ans = mid;
                st = mid + 1;
            }
            else
                en = mid - 1;
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