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
        int n, x;
        cin >> n >> x;
        vector<int> a(n), b(n), c(n);
        for (auto &it : a)
            cin >> it;
        for (auto &it : b)
            cin >> it;
        for (auto &it : c)
            cin >> it;
        int val = 0;
        for (auto &it : a)
        {
            if (((val | it) | x) == x)
                val |= it;
            else
                break;
        }
        for (auto &it : b)
        {
            if (((val | it) | x) == x)
                val |= it;
            else
                break;
        }
        for (auto &it : c)
        {
            if (((val | it) | x) == x)
                val |= it;
            else
                break;
        }
        if (val == x)
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