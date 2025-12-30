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
        int maxm = *max_element(all(arr));
        int minm = *min_element(all(arr));
        int ans = maxm - arr[0];
        ans = max(ans, arr[n - 1] - minm);
        for (int i = 0; i < n; ++i)
            ans = max(ans, arr[i] - arr[(i + 1) % n]);
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