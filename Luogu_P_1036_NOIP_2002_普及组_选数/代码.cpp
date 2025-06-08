#include<bits/stdc++.h>
using namespace std;
int n,k,cnt,ans[30];
bool is (int l){
    if (l==1)return 0;
    for(int i=2;i*i<=l;++i)
        {if(l%i==0)return 0;}
    return 1;
}
void dfs(int x,int num,int sum)
{
    if(num==k){if(is(sum))cnt++;}
    if(x==n){return;}
    for(int u =x;u<n;u++)
    {   
    dfs(u+1,num+1,sum+ans[u]);
    }
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
    cin>>n>>k;
    for(int p=0;p<n;++p){
        cin>>ans[p];
    }
    dfs(0,0,0);
    cout<<cnt;
}