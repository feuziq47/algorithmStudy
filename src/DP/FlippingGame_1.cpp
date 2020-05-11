#include <stdio.h>
#include <algorithm>

using namespace std;

int n,i,j,k,l,ans,sum;

int main(){
    scanf("%d",&n);
    int arr[n], temp[n];
    bool isZero=false;
    for (k=0; k<n; k++){
        scanf("%d",&arr[k]);
        ans+=arr[k];
        if(arr[k]==0){
            isZero=true;
        }
    }
    
    for (i=0; i<n; i++){
        for(j=i; j<n; j++){
            copy(arr,arr+n,temp);
            sum=0;
            for(l=i;l<=j;l++){
                temp[l]=1-temp[l];
            }
            for(k=0; k<n;k++){
                sum +=temp[k];
            }
            if(ans<sum){
                ans=sum;
            }
            if(isZero==false){
                ans=n-1;
            }
        }
    }
    printf("%d\n",ans);
}