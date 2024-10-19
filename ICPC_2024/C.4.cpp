#include <bits/stdc++.h>
using namespace std;

using ve_i = vector<int>;

int main() {
    int n;
    cin >> n;
    ve_i p(n), e(n), f(n);
    
    for (int &x : p) cin >> x;
    for (int &x : e) cin >> x;
    for (int &x : f) cin >> x;
    
    
    int mP = 780/3; //Max Paginas/dia
    ve_i mE(mP + 1, 0), mF(mP + 1, 0); //Max pleasure y Max fame

    for (int i=0; i < n; ++i){
        for (int j = mP; j >= p[i]; --j){
            mE[j] = max(mE[j], mE[j-p[i]] + e[i]);
            mF[j] = max(mF[j], mF[j-p[i]] + f[i]);
        }
    }

    int maxE = *max_element(mE.begin(), mE.end());
    int maxF = *max_element(mF.begin(), mF.end());
    
    if (maxE == maxF){
        cout << "EITHER" << endl;
    } else if (maxE > maxF){
        cout << "PLEASURE" << endl;
    } else {
        cout << "FAME" << endl;
    }
    return 0;
}