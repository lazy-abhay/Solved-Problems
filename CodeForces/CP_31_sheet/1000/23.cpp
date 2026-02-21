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
        int d;
        cin >> d;
        int mul = 1;
        int cnt = 1;
        int p1 = -1, p2 = -1;
        auto isPrime = [&](int x) -> bool
        {
            for (int i = 2; i * i <= x; ++i)
                if (x % i == 0)
                    return false;
            return true;
        };
        for (int i = d + 1;; ++i)
        {
            if (isPrime(i))
            {
                p1 = i;
                break;
            }
        }
        for (int i = p1 + d;; i++)
        {
            if (isPrime(i))
            {
                p2 = i;
                break;
            }
        }
        cout << min(1LL * p1 * p2, 1LL * p1 * p1 * p1);
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