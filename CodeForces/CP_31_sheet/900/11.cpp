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
        if (arr[0] == 1)
            arr[0]++;
        for (int i = 1; i < n; ++i)
        {
            if (arr[i] == 1)
                arr[i]++;
            if (arr[i] % arr[i - 1] == 0)
                arr[i]++;
        }
        for (auto &it : arr)
            cout << it << ' ';
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