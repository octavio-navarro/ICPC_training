#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define ld long double
#define ull unsigned long long

const int MAX = 1e6;
using vi = vector<int>;
using si = set<int>;
using qi = queue<int>;
using sti = stack<int>;
using pi = pair<int, int>;
using mii = map<int, int>;
using msi = map<string, int>;

#define sVI_a(data) {sort(data.begin(), data.end());}
#define sVI_d(data) {sort(data.begin(), data.end(), greater<int>());}
#define pVI(data) {for(int d : data) cout << d << " "; cout << "'\n"}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, ts;
    cin >> s;
    ts = s;

    ll n;
    cin >> n;

    for (ll i = 0; i < n ; ++i) {
        string B;

        cin >> B;

        string subs;

        while (B.size()) {
            subs = B.substr(0, s.size());

            if (subs.compare(s) != 0) {
                cout << "No" << "\n";
                break;
            }
            B = B.substr(s.size());
        }
        if (B.size() == 0) {
            cout << "Yes" << "\n";
        }
    }

    return 0;
}