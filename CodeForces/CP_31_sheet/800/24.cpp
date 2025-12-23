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
        int xorr = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            xorr ^= x;
        }
        if (n % 2 == 0 && xorr != 0)
            cout << -1;
        else
            cout << xorr;
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