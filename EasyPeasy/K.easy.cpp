#include <bits/stdc++.h>
using namespace std;

int MileCost(const vector<int>& durations){
    int cost = 0;
    for (int duration : durations){
        cost += (duration/30+1)*10;
    }
    return cost;
}

int JuiceCost(const vector<int>& durations){
    int cost = 0;
    for (int duration : durations){
        cost += (duration/60+1)*15;
    }
    return cost;
}

int main(){
    int T; 
    cin>>T;

    for (int t = 1; t <= T; ++t){
        int N;
        cin>>N;
        vector<int> durations(N);

        for (int i = 0; i < N; ++i){
            cin>>durations[i];
        }

        int mileCost = MileCost(durations);
        int juiceCost = JuiceCost(durations);

        cout<<"Case "<<t<<": ";
        if (mileCost < juiceCost){
            cout<<"Mile "<<mileCost<<endl;
        } else if (juiceCost < mileCost){
            cout<<"Juice "<<juiceCost<<endl;
        } else {
            cout<<"Mile Juice "<<mileCost<<endl;
        }
    }
    return 0;
}