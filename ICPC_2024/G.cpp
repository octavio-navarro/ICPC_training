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

int euler_gcd(int a, int b) {
    if (b == 0) return a;
        return gcd(b, a%b);
}

int GCD(int bi, int sm) {
    // Obtain the GCD between 2 numbers
    int gcd = 1;

    if (bi % sm == 0) {
        return sm;
    }

    for (int i = 1; i <= sm; ++i) {
        if (bi % i == 0 && sm % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

int Common_GCD(v_i arr) {
    int s = arr.size();

    int cd = euler_gcd(arr[0], arr[1]);

    srt(arr);

    for (int j = s - 1; j > 0; --j) {
        for (int k = j - 1; k >= 0; --k) {
            int t = euler_gcd(arr[k], arr[j]);
 
            if (t != cd) {
                return 0;
            }
        }
    }

    return cd;
}

int main()
{
    // Read faster from stdin
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, res;
    v_i arr;

    n = read_one_int();
    arr = read_line_int(n);

    res = Common_GCD(arr);

    if (res == 0)
        cout << "NO\n";
    else
        cout << "YES\n";
    return 0;
}