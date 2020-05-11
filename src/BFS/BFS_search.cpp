#include <bits/stdc++.h>

#define MAX_VERTEX 30

int num;
int graph[MAX_VERTEX][MAX_VERTEX];
int visit[MAX_VERTEX];
int queue[MAX_VERTEX];
int front, rear;


void bfs(int v){
    int i;
    visit[v]=1;
    printf("%d\n",v);
    queue[rear++]=v;
    while(front<rear)
    {
        int v = queue[front++];
        for (i=0; i<num; i++)
        {
            if(graph[v][i]==1 && !visit[i]){
                printf("%d ",i);
                queue[rear++]=i;
                printf("push\n");
                visit[i]=1;
            }
        }
        
    }
}
int main(){
    int i,j;
    int num, start;
    int v1,v2;

    for (i=0; i<MAX_VERTEX; i++)
    {
        for (j=0; j<MAX_VERTEX; j++)
            graph[i][j]=0;
        visit[i]=0;
        queue[i]=0;
    }

    scanf("%d %d",&num, &start);

    while(true){
        scanf("%d %d",&v1,&v2);
        if(v1==-1 && v2==-1)
            break;
        graph[v1][v2]=graph[v2][v1]=1;
    }

    bfs(start);

    return 0;
}