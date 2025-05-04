#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6;

using v_i = vector<int>;
using v_ii = vector<v_i>;
using s_i = set<int>;

#define pVI(data){ for(int d : data) cout << d << " "; cout << "\n"; }
#define srt(v) {sort(v.begin(), v.end());}

v_i read_line_int(int size) {
    v_i l(size);

    for (int &e : l) cin >> e;

    return l;
}

void read_tree(v_ii &s, int n, int &root) {
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        if (x == 0)
            root = i;
        else
            s[x - 1].push_back(i);
    }
}

void dfs(const v_ii& s, const v_i& g, v_i& calc, v_i& curr, int pos, int l) {
    int g_pos = g[pos] - 1;
    if (curr[g_pos] == 0)
        ++l;

    calc[pos] = l;
    ++curr[g_pos];

    for (auto i : s[pos]) dfs(s, g, calc, curr, i, l);

    --curr[g_pos]; // Restore the state after recursion
}

int main()
{
    // Read faster from stdin
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, root;
    cin >> n;

    v_ii s(n);
    read_tree(s, n, root);

    v_i g = read_line_int(n);

    v_i curr_tree(n, 0);  // Initialize the tree vector with 0s
    v_i calc(n, 0);       // Initialize the calc vector with 0s

    dfs(s, g, calc, curr_tree, root, 0);

    pVI(calc);

    return 0;
}
