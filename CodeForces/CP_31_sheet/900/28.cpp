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
        vector<int> arr(n * k);
        for (auto &it : arr)
            cin >> it;
        sort(all(arr));
        int sum = 0;
        int left = (n + 1) / 2 - 1;
        int idx = left * k;
        // cout << idx << ',';
        while (k--)
        {
            // cout << arr[idx] << ' ';
            sum += arr[idx];
            idx += (n - left);
        }
        cout << sum;
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