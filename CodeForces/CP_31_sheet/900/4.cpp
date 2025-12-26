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
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        sort(all(arr));
        int ans = b;
        for (auto &it : arr)
        {
            if (1 + it <= a)
                ans += it;
            else
                ans += a - 1;
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