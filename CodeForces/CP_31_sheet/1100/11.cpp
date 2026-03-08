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
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        sort(all(arr));
        vector<int> prefSum(n + 1, 0);
        for (int i = 1; i <= n; ++i)
            prefSum[i] = prefSum[i - 1] + arr[i - 1];
        int ans = 0;
        for (int i = 0; i <= k; ++i)
            ans = max(ans, prefSum[n - i] - prefSum[2 * (k - i)]);
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