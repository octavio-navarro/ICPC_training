#include <bits/stdc++.h>
using namespace std;

using ve_i = vector<int>;

int main(){
    int T;
    cin>>T;
    
    for (int t = 1; t <= T; ++t){
        int N;
        cin>>N;
        ve_i speeds(N);
        
        for (int i = 0; i < N; ++i){
            cin>>speeds[i];
        }
        
        int max_speed = 0;
        for (int i = 0; i < N; ++i){
            if (speeds[i] > max_speed){
                max_speed = speeds[i];
            }
        }
        
        cout<< "Case "<<t<<": "<< max_speed<<endl;
    }
    
    return 0;
}
