#include<bits/stdc++.h>

using namespace std;

#define int long long
#define INF 0x3f3f3f3f3f3f3f3f
#define nax (int) (1e5+5)

int n, a[nax];

int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  for(int i=1; i<=n; ++i){
    cin >> a[i];
  }
  int res=0;
  sort(a+1,a+1+n,greater<int>());
  for(int i=1; i<=n; ++i){
    if(!(i%3)){
      continue;
    } else{
      res+=a[i];
    }
  }
  cout << res;
  return 0;
}
