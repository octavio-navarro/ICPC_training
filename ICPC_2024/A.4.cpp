#include <bits/stdc++.h>
using namespace std;

using ve_s = vector<string>;

string f(const string &s) {
    string sorted_s = s;
    sort(sorted_s.begin(), sorted_s.end());
    return sorted_s;
}

int main() {
    int n;
    cin>>n;
    ve_s dictionary(n), queries(q), transformed(n);
    for(string &e : dictionary) cin>>e;
    
    int q;
    cin>>q;
    for(string &e : queries) cin>>e;

    for (int i = 0; i < n; ++i) {
        transformed[i] = f(dictionary[i]);
    }

    vector<pair<string, string>> sd;
    for (int i = 0; i < n; ++i) {
        sd.emplace_back(transformed[i], dictionary[i]);
    }
    
    sort(sd.begin(), sd.end());

    for (const string &query : queries) {
        string f = f(query);
        int count = upper_bound(sd.begin(), sd.end(), make_pair(f, query)) - sd.begin();
        cout<<count<<endl;
    }

    return 0;
}
