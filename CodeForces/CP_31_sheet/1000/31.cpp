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
        char c = 'z';
        int idx = -1;
        for (int i = n - 1; i >= 0; --i)
        {
            if (str[i] <= c)
            {
                c = str[i];
                idx = i;
            }
            else if (idx != -1)
            {
                cout << "YES" << endl;
                cout << i + 1 << ' ' << idx + 1;
                return; 
            }
        }
        cout << "NO";
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