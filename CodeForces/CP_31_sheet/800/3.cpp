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
        int ans = 0, cnt = 0; 
        for(auto &it: str)
        {
            if(it == '.')
                cnt++; 
            else
            {
                if(cnt >= 3)
                {
                    ans = 2; 
                    break; 
                }
                else    
                    ans += cnt; 
                cnt = 0; 
            }
        }
        if(cnt >= 3)
            ans = 2; 
        else    
            ans += cnt; 
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