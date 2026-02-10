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
        int n, d;
        cin >> n >> d;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        sort(all(arr));
        int ans = 0;
        int i = 0, j = n - 1;
        while (i <= j)
        {
            int x = (d + arr[j]) / arr[j];
            if (x <= 1)
                ans++, j--;
            else
            {
                x--;
                while (x > 0)
                {
                    i++;
                    x--;
                }
                if (i <= j)
                    ans++;
                j--;
            }
        }
        cout << ans;
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