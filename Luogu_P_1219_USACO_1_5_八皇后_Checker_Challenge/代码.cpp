#include<bits/stdc++.h>
#define int long long
using namespace std;
int N=0,cnt=0;
vector<int>ans; 
bool cheak(int x,int y)
{
    for(int i=1;i<x;++i)
        {
            if(ans[i]==y||x+y==i+ans[i]||x-y==i-ans[i])return 0;
        }
    return 1;
}
void back(int x)
{
    if(x==N+1)
    {
        ++cnt;
        if(cnt<=3)
        {
          for(int i=1;i<=N;++i)
            {
            cout<<ans[i]<<' ';
            }
            cout<<'\n';
        }               
        return;
    }
    for(int y=1;y<=N;++y)
        {
            if(cheak(x,y))
            {
                ans[x]=y;
                back(x+1);
            }
        }
}
signed main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0); 
    cin>>N;
    ans.resize(N+1);
    back(1);
    cout<<cnt;
    return 0;
}

