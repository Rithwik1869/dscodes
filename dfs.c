#include<stdio.h>
void dfs(int);
int g[10][10],visited[10],n;
void main()
{
    int i,j;
    printf("enter no.of vertices");
    scanf("%d",&n);
    printf("\n enter adjacency matrix of the graph");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&g[i][j]);
    for(i=0;i<n;i++)
        visited[i]=0;
    dfs(0);
}
void dfs(int i)
{
    int j;
    printf("\n%d",i);
    visited[i]=j;
    for(j=0;j<n;j++)
        if(!visited[j]&&g[i][j]==1)
        dfs(j);
}
