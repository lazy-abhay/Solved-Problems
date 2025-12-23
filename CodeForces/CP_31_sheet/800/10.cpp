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
        vector<string> mat(10);
        for (int i = 0; i < 10; ++i)
            cin >> mat[i];
        int up = 0, down = 9;
        int left = 0, right = 9;
        int ans = 0;
        for (int cnt = 1; cnt <= 5; ++cnt)
        {
            for (int j = left; j <= right; ++j)
                if (mat[up][j] == 'X')
                    ans += cnt;
            up++;
            for (int i = up; i <= down; ++i)
                if (mat[i][right] == 'X')
                    ans += cnt;
            right--;
            for (int j = right; j >= left; --j)
                if (mat[down][j] == 'X')
                    ans += cnt;
            down--;
            for (int i = down; i >= up; --i)
                if (mat[i][left] == 'X')
                    ans += cnt;
            left++;
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