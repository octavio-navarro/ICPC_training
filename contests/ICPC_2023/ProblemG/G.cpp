#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;

const bool debug = false;

int solve() {
    int N;
    cin >> N;
    vector<int> vals(N);

    for (int& x : vals)cin >> x;
    int gcd = std::gcd(vals[0], vals[1]);
    if (debug) cout << "GCD: " << gcd << endl;

   vector<bool> seenFactor(1e7 + 1);
    
    for (int x : vals) {

        if (debug) cout << "Haciendo valor: " << x << endl;
        if (debug) cout << "x % gcd = " << x%gcd << endl;

        if (x % gcd != 0) {
            if (debug) cout << "GCD ni es divisor" << endl;
            cout << "NO\n";
            return 0;
        }

        x /= gcd;
        if (debug) cout << "x /= gcd = " << x << endl ;

        int squareroot = sqrt(x);
        if (debug) cout << "SquareRoot: "<< squareroot << endl << endl;

        for (int d = 2; d  <= squareroot; ++d) {
            if (debug) cout << "d: "<< d << " x % d: " << x % d << endl;
            if (x % d == 0) {
                if (seenFactor[d]) {
                    if (debug) cout << "Factor ya visto" << endl;
                    cout << "NO\n";
                    return 0;
                }

                if (debug) cout << "VISTO factor: " << d << endl;
                seenFactor[d] = true;
                while (x % d == 0) x /= d; // Quitar todos las repeticiones de ese facto primo
            }
            if (debug) cout << endl;
        }
        if (x > 1) {
            if (seenFactor[x]) {
                if (debug) cout << "Factor ya visto" << endl;
                cout << "NO\n";
                return 0;
            }
            if (debug) cout << "VISTO factor: " << x << endl;
            seenFactor[x] = true;
        }
    }
   cout << "YES\n";
   return 0;
}

int main()
{
    //auto start = chrono::high_resolution_clock::now();

    solve();
    /*
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end-start);
    cout << "G3\nTime elapsed: " << duration.count() << " microseconds" << endl;
    */
}