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
        int n, k, b, s;
        cin >> n >> k >> b >> s;
        int last = k * b;
        int rem = s - last;
        if (rem < 0)
        {
            cout << -1;
            return;
        }
        if (rem < k)
            last += rem, rem = 0;
        else
            last += k - 1, rem -= (k - 1);
        if (n == 1)
        {
            if (last != s)
                cout << -1;
            else
                cout << s;
            return;
        }
        if (rem > (n - 1) * (k - 1))
        {
            cout << -1;
            return;
        }
        for (int i = 0; i < n - 1; ++i)
        {
            if (rem >= k)
            {
                cout << k - 1;
                rem -= (k - 1);
            }
            else
            {
                cout << rem;
                rem = 0;
            }
            cout << ' ';
        }
        cout << last;
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