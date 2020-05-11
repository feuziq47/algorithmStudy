#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
    int T, R;
    scanf("%d", &T);
    while(T--){
        string str;
        cin >> R >> str;
        for(int i=0; i<str.size(); i++){
            for(int j=0; j<R; j++){
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }
}