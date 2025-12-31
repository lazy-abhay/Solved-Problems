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
        vector<int> prefMin(n, 0);
        for (int i = 1; i < n; ++i)
        {
            prefMin[i] = prefMin[i - 1];
            if (arr[i] < arr[prefMin[i - 1]])
                prefMin[i] = i;
        }
        int idx = n - 1;
        for (int i = n - 2; i >= 1; --i)
        {
            if (arr[prefMin[i - 1]] < arr[i] && arr[i] > arr[idx])
            {
                cout << "YES" << endl;
                cout << prefMin[i - 1] + 1 << ' ' << i + 1 << ' ' << idx + 1;
                return;
            }
            if (arr[i] < arr[idx])
                idx = i;
        }
        cout << "NO";
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