#include <bits/stdc++.h>

using namespace std;
using ve_i = vector<int>;
using se_i = set<int>;

int main() {
    ve_i aT(5);
    for(int &e : aT) cin>>e;

    se_i bT; 
    for (int i=0; i<4; i++){
        int toy;
        cin>>toy;
        bT.insert(toy);
    }

    for (int toy : aT){
        if (bT.find(toy) == bT.end()){
            cout<<toy<<endl;
            break; 
        }
    }
    return 0;
}
