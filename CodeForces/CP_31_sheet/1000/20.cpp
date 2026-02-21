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

    int xorr[300005];
    auto abhay = [&](int __t) -> void
    {
        int a, b;
        cin >> a >> b;
        int pref = xorr[a - 1];
        if (pref == b)
            cout << a;
        else if ((pref ^ b) == a)
            cout << a + 2;
        else
            cout << a + 1;
    };

    int T = 1;
    cin >> T;
    for (int i = 1; i < 300004; ++i)
        xorr[i] = xorr[i - 1] ^ i;
    for (int t = 1; t <= T; ++t)
    {
        abhay(t);
        cout << endl;
    }
    return 0;
}