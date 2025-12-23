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
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        int cnt = count(all(arr), 2);
        if (cnt & 1)
        {
            cout << -1;
            return;
        }
        else if (cnt == 0)
        {
            cout << 1;
            return;
        }
        int two = 0;
        for (int i = 0; i < n; ++i)
        {
            two += (arr[i] == 2);
            if (two == cnt / 2)
            {
                cout << i + 1;
                return;
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