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
        vector<int> freqL(26, 0), freqR(26, 0);
        int left = 1, right = 0, ans = 0;
        for (int i = 1; i < n; ++i)
        {
            if (freqR[str[i] - 'a'] == 0)
                right++;
            freqR[str[i] - 'a']++;
        }
        ans = max(ans, left + right);
        freqL[str[0] - 'a'] = 1;
        for (int i = 1; i < n - 1; ++i)
        {
            if (freqL[str[i] - 'a'] == 0)
                left++;
            freqL[str[i] - 'a']++;
            freqR[str[i] - 'a']--;
            if (freqR[str[i] - 'a'] == 0)
                right--;
            ans = max(ans, left + right);
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