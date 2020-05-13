#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int N, M;
map<int,int> numberCnt;
int visited[8];
void sovle (int idx, int cnt){
    if(cnt==M){
        for(int i=0; i<M; i++)
        {
            cout << v[visited[i]] << " ";
        }
        cout << "/n";
        return ;
    }

    if(idx ==N) return;
    
    for (int i=0; i<v.size(); i++)
    {
        if(numberCnt[v[i]])
        {
            numberCnt[v[i]]--;

            visited[idx]=i;
            func(idx+1, cnt+1);
            numberCnt[v[i]]++;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int i;
    cin >> N >> M;
    vector<int> v;
    for (i=0; i<N; i++) {
        int num;
        cin >> num;
        if(!numberCnt.count(num)){
            numberCnt[num]=1;
            v.push_back(num);
        }else
        {
            numberCnt[num]++;
        }
        
    }

    sort(v.begin(), v.end();
    
    
}