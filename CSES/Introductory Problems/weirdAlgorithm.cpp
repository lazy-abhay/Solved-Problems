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
        while(n != 1)
        {
            cout << n << ' '; 
            if(n & 1) n = n * 3 + 1; 
            else n = n / 2; 
        }
        cout << 1; 
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