#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, B, H, W;  //Participant, budget, number of hotels and possible weeks
    while (cin >> N >> B >> H >> W){
        int minCost = B + 1;  

        for (int i = 0; i < H; ++i){
            int pricePerPerson;
            cin >> pricePerPerson;  
            
            vector<int> availableBeds(W);
            for (int j = 0; j < W; ++j){
                cin >> availableBeds[j];  
            }

            for (int j = 0; j < W; ++j){
                if (availableBeds[j] >= N){
                    int totalCost = pricePerPerson * N;
                    if (totalCost <= B){
                        minCost = min(minCost, totalCost);
                    }
                }
            }
        }

        if (minCost <= B){
            cout<<minCost<<endl;
        } else {
            cout<<"stay home"<<endl;
        }
    }
    return 0;
}