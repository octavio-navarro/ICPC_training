#include <bits/stdc++.h>

using namespace std;

using ll = long long;

using vi = vector<ll>;
using mll = unordered_map<ll, ll>;

#define pVI(data){ for(ll d : data) cout << d << " "; cout << endl; }
#define srt(v) {sort(v.begin(), v.end());}

bool isPal(bitset<26> seen, ll len)
{
    // Check if the string is a palindrome
    if (seen.count() == 0 && len % 2 == 0)
        return true;
    else if (seen.count() == 1 && len % 2 == 1)
        return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    string s;
    cin >> s;

    /* 
    // Brute Force Method
    
    // Check for all lenths from n to 2
    for (ll i = n; i >= 2; i--)
    {
        for (ll start = 0; start < n - i + 1; start++) {
            // Vector that stores whether a letter has been seen or not
            vector<bool> dp(26, false);

            // Mark the letters as seen, or mark them as not seen. Depending on the current state
            for (ll j = start; j < start + i; j++)
                dp[s[j] - 'a'] = !dp[s[j] - 'a'];

            // Check number of true in vector
            ll count = 0;
            for (bool b : dp)
                count += b;
            
            // If count is even and n is even or if count is odd and n is odd, then the biggest palindromic substring is found
            if (count == 0 && i % 2 == 0)
                return cout << i << endl, 0;
            else if (count == 1 && i % 2 == 1)
                return cout << i << endl, 0;
        }
    } */

    // Variable Size Sliding Window Method

    // Bitset to check whether a letter has been seen or not, starts with all false
    bitset<26> seen = 0;

    // Start with the complete string
    for (ll i = 0; i < n; i++) {
        seen[s[i] - 'a'] = !seen[s[i] - 'a'];
    }

    if (isPal(seen, n))
        return cout << n << endl, 0;

    ll curr_len = n, l = 0, r = n - 1;
    bool dir_left = true;
    while (curr_len >= 2) {
        if (r == n - 1) {
            dir_left = true;

            seen[s[l] - 'a'] = !seen[s[l] - 'a']; // Remove the letter from the left
            ++l; // Move to the right the window
            --curr_len;

            if (isPal(seen, curr_len)) {
                return cout << curr_len << endl, 0;
        }
        } else if (l == 0) {
            dir_left = false;

            seen[s[r] - 'a'] = !seen[s[r] - 'a']; // Remove the letter from the right
            --r; // Move to the left the window
            --curr_len;

            if (isPal(seen, curr_len)) {
                return cout << curr_len << endl, 0;
            }
        }

        if (dir_left) {
            seen[s[r] - 'a'] = !seen[s[r] - 'a']; // Remove the letter from the right
            --r; // Move to the left the window
            --l; // Move to the left the window
            seen[s[l] - 'a'] = !seen[s[l] - 'a']; // Add the letter from the left
        }
        else {
            seen[s[l] - 'a'] = !seen[s[l] - 'a']; // Remove the letter from the left
            ++l; // Move to the right the window
            ++r; // Move to the right the window
            seen[s[r] - 'a'] = !seen[s[r] - 'a']; // Add the letter from the right
        }

        if (isPal(seen, curr_len))
            return cout << curr_len << endl, 0;
    }

    cout << "1\n";

    return 0;
}