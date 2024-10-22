#include <bits/stdc++.h>
using namespace std;

using ve_i = vector<int>;

int main() {
    int T;
    cin>>T;

    for(int t = 1; t <= T; ++t){
        int N;
        cin>>N;
        ve_i heights(N);
        for (int i = 0; i < N; ++i){
            cin>>heights[i];
        }

        int high_jumps = 0;
        int low_jumps = 0;

        for (int i = 1; i < N; ++i){
            if (heights[i] > heights[i-1]){
                high_jumps++;
            } else if (heights[i] < heights[i-1]){
                low_jumps++;
            }
        }

        cout<< "Case "<<t<<": "<<high_jumps<<" "<<low_jumps<<endl;
    }
    return 0;
}