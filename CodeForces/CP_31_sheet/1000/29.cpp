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
        int a, b;
        cin >> a >> b;
        string x, y;
        while (a != 0)
        {
            x += (a & 1) ? "1" : "0";
            a /= 2;
        }
        while (b != 0)
        {
            y += (b & 1) ? "1" : "0";
            b /= 2;
        }
        reverse(all(x));
        reverse(all(y));
        int i = 0, j = 0;
        bool flag = 1;
        for (; i < x.length() && i < y.length(); ++i, j++)
            if (x[i] != y[j])
                break;

        int ans = (abs((int)(y.length() - x.length())) + 2) / 3;
        while (i < x.length())
            if (x[i] == '1')
            {
                cout << -1;
                return;
            }
            else
                i++;
        while (j < y.length())
            if (y[j] == '1')
            {
                cout << -1;
                return;
            }
            else
                j++;
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