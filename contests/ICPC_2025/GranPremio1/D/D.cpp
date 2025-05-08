#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define ld long double
#define ull unsigned long long

const int MAX = 1e6;
using vi = vector<int>;

#define pVI(data) {for(int d : data) cout << d << " "; cout << "\n";}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    ll n; // ingredients
    ll ordersPday; // orders per day
    cin >> n;
    // cout << n << "\n";
    vector<ll>quantity(n);

    for(ll i = 0; i < n; i++) {
        cin >> quantity[i];
    }

    // for(int i = 0; i < n; i++) {
    //     cout << quantity[i] << " ";
    // }

    cin >> ordersPday;

    vector<vector<ll>>orders(ordersPday, vector<ll>(n));
    vector<ll> totalorders(n, 0);

    for(ll i = 0; i < ordersPday; i++) {
        for(ll j = 0; j < n; j++) {
            cin >> orders[i][j];
            totalorders[j] += orders[i][j];
        }
    }

    // for(int i = 0; i < ordersPday; i++) {
    //     for(int j = 0; j < n; j++) {
    //         cout << orders[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    ll d;
    ll currDay = -1;
    for(ll i = 0; i < n; i++){
        if (totalorders[i] > 0)
        {
            d = quantity[i]/totalorders[i];
            if (currDay == -1 || d < currDay)
            {
                currDay = d;
            }   
        }
    }
    
    if (currDay == -1)
    {
        currDay = 0;
    }
    
    //ll currDay = *min_element(d.begin(), d.end());

    for(ll i = 0; i < n; i++){
        totalorders[i] *= currDay;
    }

    for(ll i = 0; i < n; i++){
        quantity[i]-=totalorders[i];
    }

    int indexOrder = 1;

    for(ll i = 0; i < ordersPday; i++) {
        for(ll k = 0; k < n; k++) {
            quantity[k] = quantity[k] - orders[i][k];
            if(quantity[k] < 0) {
                indexOrder = i+1;
                currDay++;
                cout << currDay << " " << indexOrder;
                return 0;
            }
        }
    }

    return 0;
}