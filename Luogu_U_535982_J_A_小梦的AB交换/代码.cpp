#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
int N;cin>>N;
for(int i=1;i<=N;++i)
    {   int cnta=0,cntb=0;
         int n;cin>>n;
        string c;cin>>c;
         string a(2*n,0),b(2*n,0);
        for(int ii=1;ii<=2*n;++ii)
            {
                if(ii%2==0){a[ii]='A';b[ii]='B';}
                if(ii%2!=0){a[ii]='B';b[ii]='A';}
                if(c[ii]!=a[ii])cnta++;
                if(c[ii]!=b[ii])cntb++;
            }
        int res=min(cnta/2,cntb/2);
        cout<<res<<'\n'; 
    }
 return 0;
}