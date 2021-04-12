#include<bits/stdc++.h>

using namespace std;

#define int long long
#define INF 0x3f3f3f3f3f3f3f3f
#define nax (int) (26)

char c[nax];
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  int x;
  cin >> x;
  int len=s.size(), ans=0;
  for(int i=0; i<len; i++){
    ans+=x+s[i]-97;
  }
  cout << ans;
  return 0;
}
