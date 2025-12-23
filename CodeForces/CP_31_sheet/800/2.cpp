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
        int ans = arr[0];
        for (int i = 0; i < n; ++i)
        {
            if (i == (n - 1))
                ans = max(ans, 2 * (x - arr[i]));
            else
                ans = max(ans, arr[i+1] - arr[i]);
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