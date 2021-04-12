#include <bits/stdc++.h>

using namespace std;

#define int long long
#define INF 0x3f3f3f3f3f3f3f3f
#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);

#define nax (int) (101)

const int mod = 1e9+7;

int a[nax];

int32_t main()
{
    FASTIO

    int f;

    cin >> f;

    while(f--)
    {
        int n,k;

        cin >> n >> k;

        if(n<=2)
        {
            if(k)
            {
                cout << -1 << '\n';
                continue;
            }
        }


        for (int i = 1; i <= n; ++i){
            a[i]=i;
        }

        for (int i = 2; i <=n; ++i){
            if(k>0)
            {
                swap(a[i],a[i+1]);
                i++;
                k--;
            }
        }

        int cnt=0;

        for (int i = 2; i < n; ++i){
            if(a[i]>a[i-1]&&a[i]>a[i+1])
                cnt++;
        }

        if(cnt<k)
        {
            cout << -1 << '\n';
            continue;
        }

        for (int i = 1; i <= n; ++i){
            cout << a[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
