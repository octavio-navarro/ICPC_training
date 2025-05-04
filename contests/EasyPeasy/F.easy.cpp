#include <bits/stdc++.h>
using namespace std;

int main() {
    int B, N;
    while (cin >> B >> N, B != 0 && N != 0) {
        vector<int> reserves(B); 
        
        for (int i = 0; i < B; ++i){
            cin >> reserves[i];
        }
        
        for (int i = 0; i < N; ++i){
            int debtor, creditor, value;
            cin >> debtor >> creditor >> value;
            reserves[debtor - 1] -= value;  
            reserves[creditor - 1] += value;  
        }
        
        bool bailout_needed = false;
        for (int i = 0; i < B; ++i){
            if (reserves[i] < 0) {
                bailout_needed = true;
                break;
            }
        }
        
        if (bailout_needed) {
            cout << "N" << endl;
        } else {
            cout << "S" << endl;
        }
    }
    return 0;
}
