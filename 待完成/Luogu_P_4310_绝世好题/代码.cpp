#include <bits/stdc++.h>
#define int long long 
using namespace std;
signed main(){
ios::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n;
cin >> n;
vector<int> a(n);
for (int i = 0; i < n; ++i) 
   {
        cin >> a[i];
    }
vector<int> dp(n, 1); 
int res = 0; 
for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j) 
           { 
            if ((a[i] & a[j]) != 0) 
               {
                dp[i] = max(dp[i], dp[j] + 1);
               }
            }
        res =max(res, dp[i]);
    }
cout << res;
return 0;
}