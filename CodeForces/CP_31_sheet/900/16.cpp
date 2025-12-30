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
        string s, t;
        cin >> s >> t;
        int n = s.length();
        int m = t.length();
        map<char, int> mp;
        int i = n - 1, j = m - 1;
        while (i >= 0 && j >= 0)
        {
            if (s[i] == t[j] && mp[s[i]] == 0)
                i--, j--;
            else
            {
                mp[s[i]]++;
                i--;
            }
        }
        cout << ((j == -1) ? "YES" : "NO");
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