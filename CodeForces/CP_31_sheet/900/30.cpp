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
        string str;
        cin >> str;
        bool alice = true;
        stack<char> st;
        for (auto &it : str)
        {
            if (st.empty())
                st.push(it);
            else if (st.top() != it)
            {
                alice = !alice; 
                st.pop();
            }
            else
                st.push(it);
        }
        cout << (alice ? "NET" : "DA");
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