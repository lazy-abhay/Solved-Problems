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
        string str;
        cin >> str;
        int left = 0, right = n - 1;
        while (left <= right)
        {
            if (str[left] != str[right])
                left++, right--;
            else
                break;
        }
        if (left <= right)
            cout << right - left + 1;
        else
            cout << 0;
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