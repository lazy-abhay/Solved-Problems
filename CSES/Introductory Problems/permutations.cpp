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
        if (n == 2 || n == 3)
            cout << "NO SOLUTION";
        else
        {
            for (int i = 2; i <= n; i += 2)
                cout << i << ' ';
            for (int i = 1; i <= n; i += 2)
                cout << i << ' ';
        }
    };

    int T = 1;
    // cin >> T;
    for (int t = 1; t <= T; ++t)
    {
        abhay(t);
        cout << endl;
    }
    return 0;
}
