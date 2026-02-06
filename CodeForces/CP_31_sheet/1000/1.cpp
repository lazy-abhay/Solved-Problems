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
        string str;
        cin >> str;
        int one = count(all(str), '1');
        int zero = count(all(str), '0');
        int ans = 0;
        for (auto &it : str)
        {
            if (it == '1' && zero)
                zero--;
            else if (it == '0' && one)
                one--;
            else
            {
                ans = one + zero;
                break;
            }
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