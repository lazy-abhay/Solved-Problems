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
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        int ans = k;
        priority_queue<int> pq;
        if (k == 2)
        {
            for (auto &it : arr)
                if (it % 2 == 0)
                    ans = 0;
            ans = 1;
        }
        else if (k == 3)
        {
            for (auto &it : arr)
                if (it % 3 == 0)
                    ans = 0;
                else
                    ans = min(ans, 3 - it % 3);
        }
        else if (k == 4)
        {
            int even = 0, odd = 0, diff = 3;
            for (auto &it : arr)
                if (it % 4 == 0)
                    even += 2;
                else if (it % 2 == 0)
                    even++;
                else
                {
                    odd++;
                    diff = min(diff, 4 - it % 3);
                }
            if (even >= 2)
                ans = 0;
            else if (even == 1)
                ans = 1;
            else if (odd > 1)
                ans = min(diff, 2LL);
            else
                ans = diff;
        }
        else
        {
            for (auto &it : arr)
                if (it % 5 == 0)
                    ans = 0;
                else
                    ans = min(ans, 5 - it % 5);
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