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
        map<int, int> mp; 
        for(int i = 0; i < n; ++i)
        {
            int x; 
            cin >> x; 
            mp[x]++; 
        }
        if(mp[0] == 0)
            cout << "NO";
        else if(mp[0] >= 2 && mp[1] == 0)
            cout << "NO"; 
        else
            cout << "YES"; 
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