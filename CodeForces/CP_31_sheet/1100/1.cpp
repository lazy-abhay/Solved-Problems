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
        string str;
        cin >> str;
        int dist = 0;
        int freq[26];
        for (int i = 0; i < 26; ++i)
            freq[i] = 0;
        int ans = 0;
        for (auto &it : str)
        {
            freq[it - 'a']++;
            if (freq[it - 'a'] == 1)
                dist++;
            ans += dist;
        }
        cout << ans;
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