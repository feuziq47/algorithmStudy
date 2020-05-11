#include <stdio.h>

using namespace std;

int main(){
    int n, i, ans, four, three, two,one;
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    ans=0; four=0; three=0; two=0; one=0;
    for (i=0; i<n; i++){
        if(a[i]==4){
            four+=1;
        }
        if(a[i]==3) {
            three+=1;
        }
        if(a[i]==2){
            two+=1;
        }
        if(a[i]==1){
            one+=1;
        }
    }
    ans = four + three + two/2;
    one -= three;
    if(two % 2 ==1){
        ans+=1;
        one-=2;
    }
    if(one >0){
        ans += (one+3) /4;
    }
    
    printf("%d\n",ans);
    return 0;
}