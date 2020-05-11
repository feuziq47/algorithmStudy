#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    int i, n, arr[100001], result;
    int dp[10001];
    scanf("%d",&n);
    for (i=0; i<n; i++){
        scanf("%d",arr+i);
    }
    dp[0]=arr[0];
    result=dp[0];
    for (i=1; i<n;i++){
        dp[i] = max(dp[i-1]+arr[i],arr[i]);
        result = max(dp[i], result);
    }
    printf("%d\n",result);
}