#include <bits/stdc++.h>
using namespace std;

template<typename T>
void out(const T &t) {
    cout << t << '\n';
}

template<typename T, typename... Args>
void out(const T &t, const Args&... args) {
    cout << t << ' ';
    out(args...);
}

void solve() {
    // solution
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}
