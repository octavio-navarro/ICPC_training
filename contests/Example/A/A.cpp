#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;
using si = set<int>;
using qi = queue<int>;
using sti = stack<int>;
using pi = pair<int, int>;
using mii = map<int, int>;
using msi = map<string, int>;

#define pVI(data){ for(int d : data) cout << d << " "; cout << endl; }
#define sVI_a(data){ sort(data.begin(), data.end()); }
#define sVI_d(data){ sort(data.begin(), data.end(), greater<int>()); }

inline bool is_even(int n) { return n%2==0;};

void solve()
{
    int n, x;
    cin >> n >> x;

    vi v(n);

    for(int &e : v) cin >> e;

    auto start = chrono::high_resolution_clock::now();
    cout << n << " " << x << endl;
    pVI(v);
    sVI_a(v);
    pVI(v);
    sVI_d(v);
    pVI(v);

    vector<int>::iterator r = find(v.begin(), v.end(), 2);

    if(r != v.end())
        cout << *r << endl;
    else
        cout << "Not found" << endl;

    auto r2 = find_if(v.begin(), v.end(), [](int n) { return n%2==0;});

    if(r2 != v.end())
        cout << *r2 << endl;
    else
        cout << "No even found" << endl;

    auto end = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(end-start);

    cout << "Time elapsed: " << duration.count() << " microseconds" << endl;
}

int main(int argc, char** argv)
{
  solve();

  return 0;
}
