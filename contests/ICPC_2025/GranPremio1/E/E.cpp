#include <bits/stdc++.h>

using namespace std;

using v_i = vector<int>;
using s_i = set<int>;
using m_ii = map<int, int>;

using ll = long long;

#define pVI(data){ for(int d : data) cout << d << " "; cout << endl; }
#define srt(v) {sort(v.begin(), v.end());}

int main()
{
    ll n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        if (x > m) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    
    return 0;
}