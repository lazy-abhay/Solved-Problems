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
        string str;
        cin >> str;
        int ans = 0, white = 0;
        for (int i = 0; i < k; ++i)
            if (str[i] == 'W')
                white++;
        ans = white;
        for (int i = k; i < n; ++i)
        {
            if (str[i] == 'W')
                white++;
            if (str[i - k] == 'W')
                white--;
            ans = min(ans, white);
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