``0//Dhaka International University
//Md. Hasanul Hoque
//Batch : 55th[Day]
//Roll : 20

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;

    printf("-------------Menu----------------\n");
    printf("1.Press 1 for linear search.\n");
    printf("2.Press 2 for binary search.\n");
    printf("3.Press 0 for exit.\n\n");

    printf("Enter your choice : ");
    scanf("%d",&a);



    if(a==1){
         int array[100], search, c, n;
  printf("You have chosen linear search algorithm to solve the problem");
  printf("\n\nEnter how many numbers you want to insert :");
  scanf("%d",&n);

  printf("Enter the numbers :", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter the search item :");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)
    {
      printf("\n\n%d is present in the location %d in the list.\n\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the list.\n", search);

    }
if(a==2){
int list[100],item_number,search_key,loc,beg,end,mid,i,choice;

printf("You have chosen binary search algorithm to solve the problem.\n\n");

    printf("---------------Menu-----------------\n");
    printf("1. Press 1 for ascending order input.\n");
    printf("2. Press 2 for descending order input.\n");
    printf("3. Press 0 for exit.\n\n");

    printf("Enter your choice : ");
    scanf("%d",&choice);

    if(choice==1){
        printf("You have chosen ascending order input for algorithm.\n");
    }
    else if(choice==2){
       printf("You have chosen descending order input for algorithm.\n");
    }

    else if (choice == 0){
        exit(0);
    }

    printf("Enter how many numbers you want to insert : ");
    scanf("%d",&item_number);

            printf("Enter the numbers : ");

    for(i=0;i<item_number;i++){
         scanf("%d",&list[i]);
    }
    printf("Enter the search item : ");
    scanf("%d",&search_key);

    if(choice == 1){

        loc=-1;
        beg=0;
        end=item_number-1;

        mid = (beg + end)/2;

    while(beg <= end){
    if(search_key<list[mid]){
        end=mid-1;
    }
    else if(search_key>list[mid])
    {
        beg=mid+1;
    }
    else
    {
        loc=mid;
        printf("\n\n%d is present in the location %d in the list.\n\n",search_key,loc+1);
        break;
    }
    mid =(beg+end)/2;
    }


    }
//    else(choice==2){
    else{
//    if(choice==2){
        loc=-1;
        beg=0;
        end=item_number-1;
            mid=(beg+end)/2;
    while(beg<=end){
        if(search_key<list[mid])
        {
            beg=mid+1;
        }
        else if(search_key>list[mid])
        {
            end=mid-1;
        }
        else
        {
        loc=mid;
        printf("\n\n%d is present in the location %d in the list.\n\n",search_key,loc+1);
        break;
        }
        mid=(beg+end)/2;
    }
    }
    }
     else if (a == 0){
        exit(0);
    }

}

