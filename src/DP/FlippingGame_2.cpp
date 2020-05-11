#include <stdio.h>
#include <algorithm>

using namespace std;

int n,i,j,k,l,ans,sum;

int main(){
    scanf("%d",&n);
    int arr[n], temp[n];
    int preSum[n];
    bool isZero=false;
    preSum[0]=0;
    for (k=0; k<n; k++){
        scanf("%d",&arr[k]);
        ans += arr[k];
        if(arr[k]==0){
            isZero=true;
        }
    }
    for (k=1; k<=n; k++){
        if(arr[k]==0){
            preSum[k] = preSum[k-1]+1;
        }else{
            preSum[k] = preSum[k-1];
        }
        
    }
    for (i=0; i<n; i++){
        for(j=i; j<n; j++){
            int dif = preSum[j]-preSum[i];
            if(ans < preSum[n]-dif){
                ans=preSum[n]-dif;
            }
            if(isZero==false){
                ans= n-1;
            }
        }
    }
    printf("%d\n",ans);
}