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
        int two = 0, three = 0;
        while (n != 1 && n % 2 == 0)
        {
            two++;
            n /= 2;
        }
        while (n != 1 && n % 3 == 0)
        {
            three++;
            n /= 3;
        }
        if (n != 1)
            cout << -1;
        else if (two > three)
            cout << -1;
        else
            cout << 2 * three - two;
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