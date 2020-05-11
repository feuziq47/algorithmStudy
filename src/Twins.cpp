#include <stdio.h>
#include <algorithm>

using namespace std;

int a[200];

int main(){
    int N,i;
    long long ans =0;
    int total=0;
    int half;
    int sum;

    scanf("%d",&N);
    for(i=0; i<N; i++){
        scanf("%d",&a[i]);
        total += a[i];
    }
    half = total/2;

    sort(a, a+N);
    sum =0;
    i = N-1;
    while (sum <= half){
        sum+=a[i];
        ans++;
        i--;  
    }
    printf("%lld\n", ans);

}