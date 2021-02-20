#include <stdio.h>
int main()
{
  int i=0,n;
  printf("Enter the number : ");
  scanf("%i",&n);
  printf("Multiplication table:\n");
  while(i<21)
    {
      printf("%d * %d = %d\n",n,i,(i*n));
      i=i+1;
    }
  return 0;
}
