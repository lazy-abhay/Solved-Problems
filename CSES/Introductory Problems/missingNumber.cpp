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
        vector<bool> visited(n + 1, 0);
        for (int i = 0; i < n - 1; ++i)
        {
            int x;
            cin >> x;
            visited[x] = 1;
        }
        for (int i = 1; i <= n; ++i)
            if (!visited[i])
            {
                cout << i;
                break;
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