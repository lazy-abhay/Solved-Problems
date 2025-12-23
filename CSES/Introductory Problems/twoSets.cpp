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
        int sum = n * (n + 1) / 2;
        if (sum & 1)
            cout << "NO";
        else
        {
            vector<int> a, b, visited(n + 1, 0);
            int halfSum = sum / 2;
            for (int i = n; i >= 1; --i)
            {
                if (halfSum >= i)
                    a.push_back(i),
                        halfSum -= i;
                else
                    b.push_back(i);
            }
            if (halfSum == 0)
            {
                cout << "YES" << endl;
                cout << (int)a.size() << endl;
                for (auto &it : a)
                    cout << it << ' ';
                cout << endl;
                cout << b.size() << endl;
                for (auto &it : b)
                    cout << it << ' ';
            }
            else
                cout << "NO";
        }
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