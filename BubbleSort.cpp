//Dhaka International University
//Md. Hasanul Hoque
//Batch : 55th[Day]
//Roll : 20

#include <stdio.h>

int main()

{
    int array[100],n,c,d,T, swap;

    printf("Enter how many numbers you want to insert : ");
    scanf("%d", &n);

    printf("\nEnter the numbers : ");

    for(c=0;c<n;c++)
        scanf("%d", &array[c]);
    printf("-----------------------Menu-----------------------\n");
    printf("Press 1 for ascending order sorting\n");
    printf("press 2 for descending order sorting\n");

    printf("Enter your choice : ");
    scanf("%d", &T);


    if(T==1)
        {
        for (c=0;c<n-1;c++)
        {
            for(d=0;d<n-c-1;d++)
            {
                if(array[d]>array[d+1])
                {
                    swap = array[d];
                    array[d] =array[d+1];
                    array[d+1]=swap;

                }
            }
        }
        printf("\n1) You have chosen ascending order sorting\n");
        printf(" Sorted list : ");

        for(c=0;c<n;c++)
            printf(" %d",array[c]);
    }
    if(T==2)
        {
        for (c=0;c<n-1;c++)
        {
            for(d=0;d<n-c-1;d++)
            {
                if(array[d]<array[d+1])
                {
                    swap = array[d];
                    array[d] =array[d+1];
                    array[d+1]=swap;

                }
            }
        }
        printf("\n1) You have chosen descending order sorting\n");
        printf(" Sorted list : ");

        for(c=0;c<n;c++)
            printf(" %d",array[c]);
    }


}
