#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        int a, b, min;
        cin>>a>>b;
        if (a == -1 || b == -1) break;

        int up = (b - a + 100) % 100;
        int down = (a - b + 100) % 100;
        if (up < down){
            min = up;
        } else {
            min = down;
        }
        
        cout<<min<<endl;
    }

    return 0;
}