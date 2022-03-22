#include<stdio.h>
#include<stdlib.h>

int main()
{
//    declaration section start
int list[100],item_number,search_key,loc,beg,end,mid,i,choice;
while(1){

    printf("---------------Menu-----------------\n");
    printf("1. Press 1 for ascending order input.\n");
    printf("2. Press 2 for descending order input.\n");
    printf("3. Press 0 for exit.\n");

    printf("Enter your choice : ");
    scanf("%d",&choice);

    if (choice == 0){
        exit(0);
    }
    printf("Enter how many numbers : ");
    scanf("%d",&item_number);

//    end = item_number - 1;

//    input section
    for(i=0;i<item_number;i++){
            printf("Enter %d number : ",i+1);
            scanf("%d",&list[i]);
    }
    printf("Enter the item you want to search : ");
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
        printf("Item found in location %d.\n\n",loc+1);
        break;
    }
    mid =(beg+end)/2;
    }
    if (loc=-1)
    {
        printf("Item is not present in the list.\n\n");
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
        printf("Item found in location %d.\n\n",loc+1);
        break;
        }
        mid=(beg+end)/2;
    }
    if (loc=-1)
    {
        printf("Item is not present in the list.\n\n");
    }
    }
}
}

