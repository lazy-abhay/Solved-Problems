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
        int x = log2(n);
        if ((n & (n - 1)) == 0)
            x--;
        for (int i = (1LL << x) - 1; i >= 0; --i)
            cout << i << ' ';
        for (int i = (1 << x); i < n; ++i)
            cout << i << ' ';
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