#include<stdio.h>
#include <stdlib.h>

int main()
{
    int array[100],n,c,d,swap,k,t;


    printf("-----------------------Menu-----------------------\n");
    printf("1. Press 1 for ascending order sorting\n");
    printf("2. press 2 for descending order sorting\n");
    printf("3. Press 0 for exit.\n");


      printf("\n\nEnter your choice : ");
      scanf("%d", &k);

    if(k==1)
    {
        printf("\n\nYou have chosen ascending order sorting.\n\n");
           printf("Enter how many numbers do you want to sort : ");
    scanf("%d", &n);

      printf("\nEnter the numbers - \n");

    for(c=0;c<n;c++)
    {
        printf("\nEnter your %d number : ",c+1);
        scanf("%d",&array[c]);
    }
        for (c=0;c<(n-1);c++)
        {
         swap=c;

         for(d=c+1;d<n;d++)
         {
             if(array[swap]>array[d])
                swap = d;
         }
         if(swap!=c)
         {
             t=array[c];
             array[c]=array[swap];
             array[swap]=t;
         }
        }

         printf("\n\nAfter using selection sort algorithm in ascending order : ");
        for(c=0;c<n;c++)
            printf(" %d", array[c]);
    }


    if(k==2)
    {
        printf("\n\nYou have chosen ascending order sorting.\n\n");
           printf("Enter how many numbers do you want to sort : ");
    scanf("%d", &n);

      printf("\nEnter the numbers - \n");

    for(c=0;c<n;c++)
    {
        printf("\nEnter your %d number : ",c+1);
        scanf("%d",&array[c]);
    }
        for (c=0;c<(n-1);c++)
        {
         swap=c;

         for(d=c+1;d<n;d++)
         {
             if(array[swap]<array[d])
                swap = d;
         }
         if(swap!=c)
         {
             t=array[c];
             array[c]=array[swap];
             array[swap]=t;
         }
        }
        printf("\n\nAfter using selection sort algorithm in ascending order : ");

        for(c=0;c<n;c++)
            printf(" %d", array[c]);
    }
    if(k==0)
    {
     exit(0);
    }

}

