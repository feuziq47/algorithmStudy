#include <stdio.h>


using namespace std;

int main(){
    int N, M, i, j;
    scanf("%d",&N);
    int seq[N];
    int sum[N];
    sum[0]=0;
    for (int k=1; k<=N; k++){
        scanf("%d",&seq[k]);
        sum[k] = sum[k-1] + seq[k];
    }
    
    scanf("%d",&M);
    int ans[M];
    for (int k=1; k<=M; k++){
        scanf("%d %d", &i, &j);
        ans[k]=sum[j] - sum[i-1];
    }
    for (int k=1; k<=M; k++){
        printf("%d\n",ans[k]);
    }
    return 0;

}