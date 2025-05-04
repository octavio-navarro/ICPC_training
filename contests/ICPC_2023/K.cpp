#include <bits/stdc++.h>

using namespace std;

using v_i = vector<int>;
using s_i = set<int>;
using m_ii = map<int, int>;

using u_ii = unordered_map<int, int>;

#define pVI(data){ for(int d : data) cout << d << " "; cout << endl; }
#define srt(v) {sort(v.begin(), v.end());}

int read_one_int(void) {
    int n;

    cin >> n;

    return n;
}

v_i read_line_int(int size) {
    v_i l(size);

    for (int &e : l) cin >> e;

    return l;
}

int main()
{
    // Read faster from stdin
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;

    scanf("%d %d\n", &n, &k);

    k--;

    u_ii square_map;

    int count = 0;
    //Read
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int t;
            scanf("%d", &t);

            // Read current
            square_map[i + (j * 2000)] = t;


            // Check corners
            if (i - k >= 0 && j - k >= 0) {
                if (square_map[i - k + (j * 2000)] == t && square_map[i + ((j - k) * 2000)] == t && square_map[i - k + ((j - k) * 2000)] == t)
                    count++;
            }
        }
    }

    cout << count << "\n";
    
    return 0;
}