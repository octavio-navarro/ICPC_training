#include <bits/stdc++.h>

using namespace std;

using v_i = vector<int>;
using s_i = set<int>;
using m_ii = map<int, int>;

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

bool is_prime(int n) {
    if (n < 2) return false;
    for (int x = 2; x*x <= n; ++x) {
        if (n%x == 0) return false;
    }
    return true;
}

bool is_perf_sq(int n) {
    for (int x = 1; x*x <= n; ++x) {
        if (x*x == n) return true;
    }
    return false;
}

int main()
{
    // Read faster from stdin
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;

    scanf("%d\n", &k);

    char str[k];
    scanf("%s\n", str);

    int res = 0;
    for (int j = 0; j < k; ++j) {
        int a = str[j] - '0';

        if (is_prime(a) || is_perf_sq(a)) {
            res += 1;
        }
    }

    printf("%d\n", res);

    return 0;
}