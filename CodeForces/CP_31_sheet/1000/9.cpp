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
        if (n % 2 == 0)
            cout << n / 2 << ' ' << n / 2;
        else
        {
            for (int i = 3; i * i <= n; i += 2)
            {
                if (n % i == 0)
                {
                    cout << n / i << ' ' << n - n / i;
                    return;
                }
            }
            cout << 1 << ' ' << n - 1;
        }
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