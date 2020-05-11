#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;
#define fi first
#define se second
const int maxn=1e5+10;
int n;
pii t[maxn];
int f[maxn];
int srch(int x)
{
    int l=1, r=n;
    while(l<r)
    {
        int mid=(l+r)>>1;
        if(t[mid].fi>=x) r=mid;
        else l=mid+1;
    }
    return l;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin>>n;
    for(int i=1;i<=n;i++) cin>>t[i].fi>>t[i].se;
    sort(t+1,t+n+1);

    f[0]=0;
    for(int i=1;i<=n;i++)
    {
        int j=srch(t[i].fi-t[i].se);
        f[i]=f[j-1]+i-j;
    }

    int res=n;
    for(int i=1;i<=n;i++) res=min(res,f[i]+n-i);
    cout<<res<<endl;
}