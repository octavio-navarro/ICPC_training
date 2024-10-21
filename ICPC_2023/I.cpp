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

void battle(int N, int M, int K) {
    if (N / K >= M)
        cout << "Iron fist Ketil\n";
    else
        cout << "King Canute\n";
}

int main()
{
    // Read faster from stdin
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    v_i arr;

    arr = read_line_int(3);

    battle(arr[0], arr[1], arr[2]);

    return 0;
}