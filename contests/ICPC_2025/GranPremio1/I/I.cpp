#include <bits/stdc++.h>

using namespace std;

using ll = long long;

using vi = vector<ll>;
using mll = unordered_map<ll, ll>;

#define pVI(data){ for(ll d : data) cout << d << " "; cout << endl; }
#define srt(v) {sort(v.begin(), v.end());}

struct Tree {
    ll index; // index
    ll value; // key
    ll parent; // parent index
    mll keyCount; // key -> count

    Tree(ll index, ll value) : index(index), value(value), parent(-1) {}
};

void pass_to_parent(vector<Tree> &trees, ll parent, ll child) {
    if (trees[parent].keyCount.find(trees[child].value) == trees[child].keyCount.end())
        trees[parent].keyCount[trees[child].value] = 1;
    else
        ++trees[parent].keyCount[trees[child].value];
    
    if (trees[parent].parent != -1)
        pass_to_parent(trees, trees[parent].parent, child);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;
    cin >> n >> q;

    vector<Tree> trees(n + 1, Tree(0, 0));
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        trees[i] = Tree(i, x);
        trees[i].keyCount[x] = 1;
    }

    for (ll i = 0; i < n - 1; i++)
    {
        ll a, b;
        cin >> a >> b;

        trees[b].parent = a;
        
        pass_to_parent(trees, a, b);
    }

    for (ll i = 0; i < q; i++)
    {
        ll a, b;
        cin >> a >> b;

        cout << trees[a].keyCount[b] << endl;
    }
    
    return 0;
}