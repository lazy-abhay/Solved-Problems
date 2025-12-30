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
        string str;
        cin >> str;
        int n = str.length();
        int zero = -n, two = -n, five = -n, seven = -n;
        int ans = n;
        for (int i = 0; i < n; ++i)
        {
            if (str[i] == '0')
            {
                ans = min(ans, n - zero - 2);
                ans = min(ans, n - five - 2);
                zero = i;
            }
            else if (str[i] == '5')
            {
                ans = min(ans, n - two - 2);
                ans = min(ans, n - seven - 2);
                five = i;
            }
            else if (str[i] == '2')
                two = i;
            else if (str[i] == '7')
                seven = i;
            // cout << i << ' ' << ans << endl;
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