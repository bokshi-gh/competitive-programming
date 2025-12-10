#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using mii = map<int, int>;
using mci = map<char, int>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

// ---------------- Debug Macro ----------------
// Prints variable name and value for debugging
// Only active if compiled with -DLOCAL
// Example: g++ -DLOCAL template.cpp -o run
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << "\n";
#else
#define debug(x)
#endif


void solve() {
    // Write your solution here
    // Use debug(x) to print variable values when testing locally
}

int main() {
    fastio;

    int t = 1;           
    cin >> t;            
    while (t--) solve(); 

    return 0;
}
