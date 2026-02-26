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
        int sum = 0, minm1 = INT_MAX, minm2 = INT_MAX;
        while (n--)
        {
            int m;
            cin >> m;
            vector<int> arr(m);
            for (auto &it : arr)
                cin >> it;
            sort(all(arr));
            sum += arr[1];
            minm1 = min(minm1, arr[0]);
            minm2 = min(minm2, arr[1]);
        }
        cout << sum - minm2 + minm1;
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