#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N=1e6+10;
int n,s[N],cnt[N];
int find(int i){
    if(s[i]!=i)s[i]=find(s[i]);
    return s[i];
}
signed main ()
{
ios::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;++i){s[i]=i;cnt[i]=1;}
    for(int i=1;i<=n;++i)
        {   
            int x;
            cin>>x;
            int a=find(i);int b=find(x);
            if(a==b)continue;
            s[b]=a;cnt[a]+=cnt[b];
        }
    int res=1;
    for(int i=1;i<=n;++i)
        {
            int a=find(i);int b=find(i+1);
            if(a==b){res=max(res,cnt[a]);}
            else{res=max(res,cnt[a]+cnt[b]);}           
        }
    cout<<res;
}