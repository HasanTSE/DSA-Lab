#include<stdio.h>
int main()
{
    int array[100],n,c,d,swap,k,t;

    printf("Enter how many numbers you want to insert : ");
    scanf("%d", &n);

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
        printf("\n1)You have chosen ascending order sorting\n");
        printf(" Sorted list : ");

        for(c=0;c<n;c++)
            printf(" %d", array[c]);
    }


    if(k==2)
    {
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
        printf("\n1)You have chosen descending order sorting\n");
        printf(" Sorted list : ");

        for(c=0;c<n;c++)
            printf(" %d", array[c]);
    }

}
