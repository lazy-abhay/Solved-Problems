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
        int a, b, c;
        cin >> a >> b >> c;
        int m1 = 0, m2 = 0, m3 = 0;
        int d = c - b;
        if ((b - d) % a == 0)
            m1 = (b - d) / a;
        d = b - a;
        if ((b + d) % c == 0)
            m2 = (b + d) / c;
        int d2 = c - a;
        if (d2 % 2 == 0 && (a + d2 / 2) % b == 0)
            m3 = (a + d2 / 2) / b;
        if (m1 > 0 || m2 > 0 || m3 > 0)
            cout << "YES";
        else
            cout << "NO";
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