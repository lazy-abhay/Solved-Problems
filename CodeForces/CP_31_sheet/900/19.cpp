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
        int st, n;
        cin >> st >> n;
        if (st % 2 == 0)
        {
            if (n % 4 == 1)
                cout << st + 3 - 4 * (n / 4 + 1);
            else if (n % 4 == 2)
                cout << st + 1;
            else if (n % 4 == 3)
                cout << st + 4 * (n / 4 + 1);
            else
                cout << st;
        }
        else
        {
            if (n % 4 == 1)
                cout << st - 3 + 4 * (n / 4 + 1);
            else if (n % 4 == 2)
                cout << st - 1;
            else if (n % 4 == 3)
                cout << st - 4 * (n / 4 + 1);
            else
                cout << st;
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