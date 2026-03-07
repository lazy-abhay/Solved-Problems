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
        auto mod = [&](int x, int y) -> int
        {
            return (x % y + y) % y;
        };
        int ans = arr[0], curr = max(0LL, arr[0]);
        for (int i = 1; i < n; ++i)
        {
            if (mod(arr[i - 1], 2) != mod(arr[i], 2))
                curr += arr[i];
            else
                curr = arr[i];
            ans = max(ans, curr);
            if (curr < 0)
                curr = 0;
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