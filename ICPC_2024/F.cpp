#include <bits/stdc++.h>

using namespace std;

using v_i = vector<int>;
using s_i = set<int>;
using m_ii = map<int, int>; 

#define pVI(data){ for(int d : data) cout << d << " "; cout << endl; }

void find_missing(void) {
    v_i v1(5), v2(4);

    for (int &e : v1) cin >> e;
    for (int &e : v2) cin >> e;

    s_i s1(v1.begin(), v1.end());
    s_i s2(v2.begin(), v2.end());

    for (int val : s1) {
        if (!s2.contains(val))
        {
            cout << val << endl;
        }
    }
}

int main() {
    find_missing();

    return 0;
}