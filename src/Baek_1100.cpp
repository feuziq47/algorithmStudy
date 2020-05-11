#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
    int n=8;
    int ans=0;
    while(n--){
        string str;
        cin>>str;
        for(int k=0; k<str.size(); k++){
            if(str[k]=='F'){
                ans++;
            }
        }
    }
    printf("%d\n",ans);
}