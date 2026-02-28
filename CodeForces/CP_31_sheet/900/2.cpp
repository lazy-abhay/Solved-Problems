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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        map<char, int> mp;
        for (auto &it : str)
            mp[it]++;
        int odd = 0;
        for (auto &it : mp)
            if (it.second & 1)
                odd++;
        if ((n - k) & 1)
        {
            if (odd > (k + 1))
                cout << "NO";
            else
                cout << "YES";
        }
        else
        {
            if (odd > k)
                cout << "NO";
            else
                cout << "YES";
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