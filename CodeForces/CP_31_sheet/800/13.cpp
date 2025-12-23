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
        sort(all(arr));
        if (arr.front() == arr.back())
            cout << -1;
        else
        {
            int x = count(all(arr), arr[0]);
            cout << x << ' ' << n - x << endl;
            for (int i = 0; i < n; ++i)
                if (arr[i] == arr[0])
                    cout << arr[i] << ' ';
                else
                    break;
            cout << endl;
            for (int i = 0; i < n; ++i)
                if (arr[i] != arr[0])
                    cout << arr[i] << ' ';
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