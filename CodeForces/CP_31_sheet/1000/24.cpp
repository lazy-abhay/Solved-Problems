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
        int n, m;
        cin >> n >> m;
        int neg = INT_MAX, cnt = 0, sum = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                int x;
                cin >> x;
                if (x < 0)
                {
                    cnt++;
                }
                neg = min(neg, abs(x));
                sum += abs(x);
            }
        }
        if (cnt % 2 == 1)
            cout << sum - 2 * neg;
        else
            cout << sum;
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