#include <bits/stdc++.h>
using namespace std;

using ve_i = vector<int>;
using pa_i = pair<int, int>;

//Se puede hacer la orden?
bool CO(const ve_i& order, const vector<vector<pa_i>>& dishes, ve_i& available){
    ve_i temp = available;
    for (int d : order) {
        for (auto& in : dishes[d-1]){
            if (temp[in.first-1] < in.second) { //Hay suficientes ingredientes?
                return false;
                break;
            }
            temp[in.first-1] -= in.second;
        }
    }
    available = temp;
    return true;
}

int main() {
    int i, d, o; // ingredients, dishes, orders
    cin >> i >> d >> o;

    ve_i available(i); //Cantidades de ingredientes
    for (int &e : available) cin >> e;

    vector<vector<pa_i>> dishes(d); //platos y ingredientes necesarios
    for (int idx = 0; idx < d; idx++){
        int e;
        cin >> e;
        for (int j = 0; j < e; j++) {
            int in, q; // ingrediente y cantidad
            cin >> in >> q;
            dishes[idx].push_back({in, q});
        }
    }

    int oc = 0; 
    for (int i = 0; i < o; i++){ //Checar orden 
        int oi;
        cin >> oi;

        ve_i order(oi);
        for (int &e : order) cin >> e;

        if (CO(order, dishes, available)){ //Se puede cumplir la orden?
            oc++;
        } else {
            break; 
        }
    }

    cout << oc << endl;
    return 0;
}
