#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,array[1000], c,d,t,k,flag=0;

    printf("-----------------------Menu-----------------------\n");
    printf("1. Press 1 for ascending order sorting\n");
    printf("2. press 2 for descending order sorting\n");
    printf("3. Press 0 for exit.\n");

    printf("\n\nEnter your choice : ");
    scanf("%d", &k);

    if(k==1)
    {
        printf("\n\nYou have chosen ascending order sorting.\n\n");

         printf("\n\nEnter how many numbers do you want to sort : ");
        scanf("%d",&n);

        printf("\nEnter the numbers - \n");

          for(c=0;c<n;c++)
            {
        printf("\nEnter your %d number : ",c+1);
        scanf("%d",&array[c]);
            }


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

        printf("\n\nAfter using insertion sort algorithm in ascending order : ");

        for(c=0;c<=n-1;c++)
        {
            printf(" %d",array[c]);
        }
    }

    if(k==2)
    {
         printf("\n\nYou have chosen descending order sorting.\n\n");

         printf("\n\nEnter how many numbers do you want to sort : ");
        scanf("%d",&n);

        printf("\nEnter the numbers - \n");

          for(c=0;c<n;c++)
            {
        printf("\nEnter your %d number : ",c+1);
        scanf("%d",&array[c]);
            }


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

       printf("\n\nAfter using insertion sort algorithm in descending order : ");

        for(c=0;c<=n-1;c++)
        {
            printf(" %d",array[c]);
        }
    }
     if(k==0)
    {
     exit(0);
    }
}
