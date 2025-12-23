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
        set<int> st; 
        int diff = 0, num = -1; 
        for(int i = 0; i < n; ++i)  
        {
            int x; 
            cin >> x; 
            st.insert(x);
            if(i == 0)
                num = x; 
            if(num == x)
                diff++; 
            else    
                diff--; 
        }
        if(st.size() > 2)
            cout << "NO"; 
        else if(st.size() == 2)
        {
            if(abs(diff) > 1)
                cout << "NO"; 
            else
                cout << "YES"; 
        }
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