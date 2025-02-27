#include <bits/stdc++.h>

using namespace std;

using v_i = vector<int>;
using s_i = set<int>;
using m_ii = map<int, int>;

#define pVI(data){ for(int d : data) cout << d << " "; cout << endl; }
#define srt(v) {sort(v.begin(), v.end());}

v_i read_line_int(int size) {
    v_i l(size);

    for (int &e : l) cin >> e;

    return l;
}

int kmp(v_i &p, v_i &s, v_i &m, int s_len, int p_len) {
    int j = 0, c = 0;

    for (int i=0; i < s_len; ++i)
    {
        while (j > 0 && s[i] != p[j]) {
            j = m[j - 1]; // Reset j to previous matched prefix length
        }

        if (p[j] == s[i])
            ++j;

        if (j == p_len) {
            ++c;
            j = m[j - 1];
        }
    }
    return c;
}

v_i prepare(v_i &a, int n) {
    v_i b(n - 1, 0);
    for (int i = n - 1; i > 0; --i) {
        b[i - 1] = a[i] - a[i - 1];
    }
    return b;
}

v_i create_match(v_i &p, int n) {
    v_i match(n, 0); // Initialize with size `n`

    int j = 0;
    for (int i = 1; i < n; ++i) {
        while (j > 0 && p[i] != p[j]) {
            j = match[j - 1];
        }
        if (p[i] == p[j]) {
            match[i] = ++j;
        } else {
            match[i] = 0;
        }
    }
    return match;
}

int main()
{
    // Read faster from stdin
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    if (n == 1) {
        cout << m << "\n";
        return 0;
    }

    v_i v_n = read_line_int(n);
    v_i v_m = read_line_int(m);

    v_n = prepare(v_n, n);
    v_m = prepare(v_m, m);

    //pVI(v_n);
    //pVI(v_m);

    v_i match = create_match(v_m, m - 1);

    //pVI(match);

    cout << kmp(v_n, v_m, match, m - 1, n - 1) << "\n";

    return 0;
}