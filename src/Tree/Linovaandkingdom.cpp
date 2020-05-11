#include <bits/stdc++.h>

using namespace std;

vector<int> Edges[200005];
bool Visit[200005];

class node
{
    public:
    int cnt, dist;
    bool operator < (const node& a) const
    {
        return dist - cnt < a.dist - a.cnt;
    } 
} a[200005];
int dfs(int pos)
{
    // a[pos].dist 는 알고 있음
    // Edges[pos][0] ~ Edges[pos][size()-1]
    int i,k;
    int count=0;
    k=Edges[pos].size();
    Visit[pos] = true;
    for(i=0; i<k; i++)
    {
        if(!Visit[Edges[pos][i]]){
            a[Edges[pos][i]].dist = a[pos].dist +1;
            count += dfs(Edges[pos][i]);
        }
    }
    a[pos].cnt = count;
    return count + 1;
}

int main()
{
    long long ans;
    int n,k,a,b;
    int i,j;
    scanf("%d %d",&n,&k);
    for(i=1; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        Edges[a].push_back(b);
        Edges[b].push_back(a);
    }
    a[1].dist=0;
    dfs(1);
    sort(a+1,a+n+1);
    ans=0;
    for (j=n; j>n-k; j--)
    {
        ans +=a[j].dist-a[j].cnt;
    }
    printf("%lld\n",ans);

    return 0;
}