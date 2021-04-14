#include <bits/stdc++.h>

using namespace std;

#define ar array
#define int long long
#define INF 0x3f3f3f3f3f3f3f3f

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;

void solve() {
    int a,b;
    cin >> a >> b;
    if(a>b){
      cout << '>' << '\n';
    } else if(a==b){
      cout << '=' << '\n';
    } else{
      cout << '<' << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}
