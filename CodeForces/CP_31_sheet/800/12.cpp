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
        vector<int> ans;
        ans.push_back(arr[0]);
        for (int i = 1; i < n; ++i)
        {
            if (arr[i] >= arr[i - 1])
                ans.push_back(arr[i]);
            else
            {
                ans.push_back(1);
                ans.push_back(arr[i]);
            }
        }
        cout << ans.size() << endl;
        for (auto &it : ans)
            cout << it << " ";
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