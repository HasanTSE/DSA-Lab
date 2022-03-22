#include <stdio.h>

int main()

{
    int array[100],n,c,d,T, swap;



    printf("-----------------------Menu-----------------------\n");
    printf("1. Press 1 for ascending order sorting.\n");
    printf("2. press 2 for descending order sorting.\n");
    printf("3. Press 0 for exit.\n");

    printf("\n\nEnter your choice : ");
    scanf("%d", &T);


    if(T==1){
        printf("\n\nYou have chosen ascending order sorting.\n\n");

      printf("Enter how many numbers do you want to sort : ");
      scanf("%d", &n);

        printf("\nEnter the numbers - \n");

    for(c=0;c<n;c++)
    {
        printf("\nEnter your %d number : ",c+1);
        scanf("%d", &array[c]);
    }




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
        printf("\n\nAfter using bubble sort algorithm in ascending order : ");

        for(c=0;c<n;c++)
            printf(" %d",array[c]);
    }
    }


    if(T==2)
        {
    printf("\n\nYou have chosen descending order sorting.\n\n");

      printf("Enter how many numbers do you want to sort : ");
      scanf("%d", &n);

       printf("\nEnter the numbers - \n");

    for(c=0;c<n;c++)
    {
        printf("\nEnter your %d number : ",c+1);
        scanf("%d", &array[c]);
    }
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
       printf("\n\nAfter using bubble sort algorithm in descending order : ");

        for(c=0;c<n;c++)
            printf(" %d",array[c]);
    }
    }
    if(T==0)
    {
     exit(0);
    }


}

