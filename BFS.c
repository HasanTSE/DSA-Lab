//Dhaka International University
//Md. Hasanul Hoque
//Batch : 55th[Day]
//Roll : 20

#include<stdio.h>
#include<stdlib.h>


int q[20],top=-1,front=-1,rear=-1,array1[20][20],vis[20],stack[20];
int delete();
void add(int item);
void bfs(int s,int n);
void dfs(int s,int n);
void push(int item);
int pop();

void main()

{
    int n,i,s,ch,j;
    char c,extra;
    printf("Enter how many vertices in the graph :");
    scanf("%d",&n);
    printf("\n\n\n");
    for(i=0; i<=n-1; i++)
    {
        for(j=0; j<=n-1; j++)
        {
            printf("\nEnter '1' else '0' -> If %d has adjacency vertices with %d :",i,j);
            scanf("%d",&array1[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n\n");
    printf("The adjacency matrix is :\n");

    for(i=0; i<=n-1; i++)
    {
        for(j=0; j<=n-1; j++)
        {
            printf("\t%d",array1[i][j]);
        }
        printf("\n");
    }

    do
    {
        for(i=0; i<=n-1; i++)
            vis[i]=0;
        printf("\n\n");
        printf("Press '1' for Continue.");

        printf("\nENTER 1 :");
        scanf("%d",&ch);
        printf("\nNow, Enter the source vertices :");
        scanf("%d",&s);
        printf("%d",s);

        switch(ch)
        {
        case 1:
            bfs(s,n);
            break;
        }


        printf("\n\n***If continue press 'Y/n' else 'N/n'***\n");
        scanf("%c",&extra);
        scanf("%c",&c);
    }
    while((c=='y')||(c=='Y'));
}


//**************BFS(breadth-first search) code**************//
void bfs(int s,int n)
{
    int p,i;
    add(s);
    vis[s]=1;
    p=delete();
    if(p!=0)
        printf(" %d",p);
    while(p!=0)
    {
        for(i=0; i<=n-1; i++)
            if((array1[p][i]!=0)&&(vis[i]==0))
            {
                add(i);
                vis[i]=0;
            }
        p=delete();
        if(p!=0)
            printf(" %d ",p);
    }
    for(i=0; i<=n-1; i++)
        if(vis[i]==0)
            bfs(i,n);
}


void add(int item)
{
    if(rear==19)
        printf("QUEUE FULL: \n");
    else
    {
        if(rear==-1)
        {
            q[++rear]=item;
            front++;
        }
        else
            q[++rear]=item;
    }
}
int delete()
{
    int k;
    if((front>rear)||(front==-1))
        return(0);
    else
    {
        k=q[front++];
        return(k);
    }
}
