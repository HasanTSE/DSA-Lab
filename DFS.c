//Dhaka International University
//Md. Hasanul Hoque
//Batch : 55th[Day]
//Roll : 20

#include<stdio.h>
#include<stdlib.h>


int q[20],top=-1,front=-1,rear=-1,array1[20][20],bis[20],stack[20];
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
     printf("\n\n");
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
            printf(" %d",array1[i][j]);
        }
        printf("\n");
    }

    do
    {
        for(i=0; i<=n-1; i++)
            bis[i]=0;
        printf("\n\n");
        printf("Press '1' for Continue.\n");
        printf("ENTER 1 :");
        scanf("%d",&ch);
        printf("\nNow, Enter the source vertices :");
        scanf("%d",&s);
        printf("%d",s);

        switch(ch)
        {
        case 1:
            dfs(s,n);
            break;
        }
          printf("\n\n***If continue press 'Y/n' else 'N/n'***\n");
        scanf("%c",&extra);
        scanf("%c",&c);
    }
    while((c=='y')||(c=='Y'));
}


//***************DFS(depth-first search) code******************//
void dfs(int s,int n)
{
    int i,k;
    push(s);
    bis[s]=1;
    k=pop();
    if(k!=0)
        printf(" %d",k);
    while(k!=0)
    {
        for(i=0; i<=n-1; i++)
            if((array1[k][i]!=0)&&(bis[i]==0))
            {
                push(i);
                bis[i]=1;
            }
        k=pop();
        if(k!=0)
            printf(" %d ",k);
    }
    for(i=0; i<=n-1; i++)
        if(bis[i]==0)
            dfs(i,n);
}
void push(int item)
{
    if(top==19)
        printf("Stack overflow ");
    else
        stack[++top]=item;
}
int pop()
{
    int k;
    if(top==-1)
        return(0);
    else
    {
        k=stack[top--];
        return(k);
    }
}
