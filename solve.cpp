/**
*    author:  longvu
**/
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define INF 0x3f3f3f3f3f3f3f3f
#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);

#define nax (int) (1001)

const int mod = 1e9+7;

int32_t main()
{
  FASTIO
  int t;
  cin >> t;
  while(t--){
    int n,k;
    cin >> n >> k;
    vector<int> a(n+1);
    for(int i=1; i<=n; ++i){
      a[i]=i;
    }
    if(k==0){
      for(int i=1; i<=n; ++i){
        cout << i << ' ';
      }
      cout << '\n';
    } else{
      int cnt=0;
      for(int i=2; i<n; i+=2){
        ++cnt;
      }
      if(k<=cnt){
        for(int i=2, j=0; j<k; ++j, i+=2){
          swap(a[i],a[i+1]);
        }
        for(int i=1; i<=n; ++i){
          cout << a[i] << ' ';
        }
        cout << '\n';
      } else{
        cout << -1 << '\n';
      }
    }
  }
  return 0;
}
