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
        string a, b;
        cin >> a >> b;
        int n = a.length();
        int m = b.length();
        int ans = n + m;
        for (int i = 0; i < n; ++i)
        {
            string temp = "";
            for (int j = i; j < n; ++j)
            {
                temp += a[j];
                if (b.find(temp) != -1)
                    ans = min(ans, n + m - 2LL * (j - i + 1));
            }
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