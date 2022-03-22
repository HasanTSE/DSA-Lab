#include<stdio.h>

int main()
{
    int n,array[1000], c,d,t,k,flag=0;

    printf("Enter how many numbers you want to insert : ");
    scanf("%d",&n);

    printf("\nEnter the numbers : ");

    for(c=0;c<n;c++)
        scanf("%d",&array[c]);

    printf("-----------------------Menu-----------------------\n");
    printf("Press 1 for ascending order sorting\n");
    printf("press 2 for descending order sorting\n");

    printf("Enter your choice : ");
    scanf("%d", &k);

    if(k==1)
    {
        for(c=1;c<=n-1;c++)
        {
            t=array[c];
            for(d=c-1;d>=0;d--)
            {
                if(array[d]>t)
                {
                    array[d+1]=array[d];
                    flag=1;
                }
                else
                    break;

            }
            if(flag)
                array[d+1]=t;
        }
        printf("\n1)You have chosen ascending order sorting\n");
        printf(" Sorted list : ");

        for(c=0;c<=n-1;c++)
        {
            printf(" %d",array[c]);
        }
    }

    if(k==2)
    {
        for(c=1;c<=n-1;c++)
        {
            t=array[c];
            for(d=c-1;d>=0;d--)
            {
                if(array[d]<t)
                {
                    array[d+1]=array[d];
                    flag=1;
                }
                else
                    break;

            }
            if(flag)
                array[d+1]=t;
        }
        printf("\n1)You have chosen descending order sorting\n");
        printf(" Sorted list : ");

        for(c=0;c<=n-1;c++)
        {
            printf(" %d",array[c]);
        }
    }
}
