#include<stdio.h>
int main()
{ 
  int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int max = 0 ;
  int i;
  
  for (i = 0; i <= 10; i++)
    if (max < a[i])
      max = i;
  
  printf("maximul este = %d", max);
  return 0;
}

  