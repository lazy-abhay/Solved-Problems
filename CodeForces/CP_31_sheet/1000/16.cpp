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
        int n, r, b;
        cin >> n >> r >> b;
        int x = r / (b + 1);
        int y = r % (b + 1);
        for (int i = 0; i < b + 1; ++i)
        {
            if (i < y)
                cout << string(x + 1, 'R');
            else
                cout << string(x, 'R');
            if (i < b)
                cout << string(1, 'B');
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