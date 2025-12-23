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
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << endl;
            cout << n << endl;
            while (n--)
                cout << "1 ";
        }
        else if (x == 1)
        {
            if (k == 1)
                cout << "NO";
            else if (k == 2 && n % 2 == 1)
                cout << "NO";
            else if (n & 1)
            {
                cout << "YES" << endl;
                cout << 1 + (n - 3) / 2 << endl;
                cout << 3 << ' ';
                n -= 3;
                while (n > 0)
                {
                    cout << 2 << ' ';
                    n -= 2;
                }
            }
            else
            {
                cout << "YES" << endl;
                cout << n / 2 << endl;
                while (n > 0)
                {
                    cout << 2 << ' ';
                    n -= 2;
                }
            }
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