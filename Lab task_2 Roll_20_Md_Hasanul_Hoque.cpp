//Dhaka International University
//Md. Hasanul Hoque
//Batch : 55th[Day]
//Roll : 20

#include<stdio.h>
#include <stdlib.h>

int main()

{

int a;

printf("------------------Menu------------------\n");
printf("1.Press 1 for bubble sorting.\n");

printf("2.Press 2 for insertion order sorting.\n");

printf("3.Press 3 for selection order sorting.\n");

printf("4.Press 0 for exit.\n");

printf("\n\nEnter your choice : ");
scanf("%d",&a);

if(a==1)//Bubble Sort start
{
    printf("\n\nYou have chosen bubble sorting algorithm for sorting.\n\n");
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


}//Bubble Sort end


else if(a==2)//Insertion Sort start
{
     printf("\n\nYou have chosen insertion sorting algorithm for sorting.\n\n");
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

}//Insertion Sort stop


else if(a==3)//Selection Sort start
{
     printf("\n\nYou have chosen selection sorting algorithm for sorting.\n\n");
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


}//Selection Sort stop

else if(a==0)
{
   exit(0);
}


}
