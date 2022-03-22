#include <stdio.h>
int main()
{
  int array[100], search, c, n;
  printf("You have chosen linear search algorithm to solve the problem");
  printf("\nEnter how many numbers you want to insert :");
  scanf("%d",&n);

  printf("Enter the numbers :", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter the search item :");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      printf("%d is present in the location %d in the list.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the list.\n", search);

  return 0;
}
