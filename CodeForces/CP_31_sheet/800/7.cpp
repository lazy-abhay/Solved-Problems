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
        int n, m; 
        cin >> n >> m; 
        string x, s; 
        cin >> x; 
        cin >> s; 
        int cnt = 0; 
        while(x.length() < 1000){
            if(x.find(s) != -1)
            {
                cout << cnt; 
                return; 
            }
            cnt++; 
            x += x;
        }
        cout << -1; 
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