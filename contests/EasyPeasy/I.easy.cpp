#include <bits/stdc++.h>
using namespace std;

using ve_i = vector<int>;
int main() {
    int N;
    cin>>N;
    cout<<"Lumberjacks:"<<endl;

    for (int i = 0; i < N; ++i){
        ve_i h(10);
        for (int j = 0; j < 10; ++j) cin>>h[j];

        if (is_sorted(h.begin(), h.end()) || is_sorted(h.rbegin(), h.rend())){
            cout<<"Ordered"<<endl;
        } else {
            cout<<"Unordered"<<endl;
        }
    }

    return 0;
}