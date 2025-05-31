#include<bits/stdc++.h>
using namespace std;
int N;long long C,a[200001],cnt;map<long long,long long>m;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
    cin>>N>>C;
    for(int n=0;n<N;++n)
        {
            cin>>a[n];
            m[a[n]]++;
            a[n]-=C;
        }
    for(int i=0;i<N;++i){
        cnt+=m[a[i]];
    }
    cout<<cnt;
    return 0;
}