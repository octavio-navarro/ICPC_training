#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a;
    vector<int> dp(100001,0);

    int prev = 1;
    int curr = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        
        curr = (prev + dp[a]) % 998244353;

        dp[a] = (dp[a] + prev) % 998244353;

        prev = curr;
    }
    

    cout << curr << "\n";
    return 0;
}
