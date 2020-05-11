// 삼성 SW기출문제_연구소
#include <bits/stdc++.h>


using namespace std;

typedef struct 
{
    int y, x;    
}Dir;

Dir movedir[4]={{0,1},{0,-1},{1,0},{-1,0}};

int N, M;
int lab[8][8];
int temp[8][8];
int result;

void BFS()
{
    int afterSpread[8][8];
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            afterSpread[i][j]=temp[i][j];
        }
    }

    queue<pair<int, int>> virusq;

    for (int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            if(afterSpread[i][j]==2)
                virusq.push(make_pair(i,j));
        }
    }

    while(!virusq.empty())
    {
        int y= virusq.front().first;
        int x= virusq.front().second;
        virusq.pop();
        
        for(int i=0; i<4;i++)
        {
            int nexty=y+movedir[i].y;
            int nextx=x+movedir[i].x;

            if(nexty>=0 && nexty<N && nextx>=0 && nextx<M)
            {
                if(afterSpread[nexty][nextx]==0){
                    afterSpread[nexty][nextx]=2;
                    virusq.push(make_pair(nexty, nextx));
                }
            }
        }
        
    }
    int empty =0;
        for (int i=0; i<N; i++)
        {
            for (int j=0; j<M; j++)
            {
                if(afterSpread[i][j]==0)
                {
                    empty++;
                }
            }
        }
    result =max(result,empty);    
}
void makeWall(int cnt)
{
    if(cnt==3)
    {
        BFS();
        return;
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0; j<M; j++)
        {
            if(temp[i][j]==0)
            {
                temp[i][j]=1;
                makeWall(cnt+1);
                temp[i][j]=0;
            }
        }
    }
}
int main(){
    cin >> N >> M;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            cin >> lab[i][j];
        }
    }

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            if(lab[i][j]==0) // 빈 칸
            {
                for(int k=0; k<N; k++)
                {
                    for(int l=0; l<M;l++)
                    {
                        temp[k][l]=lab[k][l];
                    }
                }
                temp[i][j]=1;
                makeWall(1);
                temp[i][j]=0;
            }
        }
    }
    cout << result <<endl;
    return 0;
}