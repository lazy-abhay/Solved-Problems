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
        char c;
        cin >> n >> c;
        string str;
        cin >> str;
        str += str;
        if (c == 'g')
        {
            cout << 0;
            return;
        }
        int prev = INT_MAX, ans = 0;
        for (int i = 0; i < 2 * n; ++i)
        {
            if (str[i] == c && prev == INT_MAX)
                prev = i;
            else if (str[i] == 'g')
            {
                ans = max(ans, i - prev);
                prev = INT_MAX;
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