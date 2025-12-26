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
        if (n % 2 == 0)
        {
            cout << 2 << endl;
            cout << 1 << ' ' << n << endl;
            cout << 1 << ' ' << n << endl;
        }
        else
        {
            cout << "4" << endl;
            cout << "1 " << n - 1 << endl;
            cout << "1 " << n - 1 << endl;
            cout << n - 1 << ' ' << n << endl;
            cout << n - 1 << ' ' << n << endl;
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