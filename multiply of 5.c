#include <stdio.h>

void main()
{
  long int sum=0,i,n;
  clrscr();
  printf("\n enter the value of N:");
  scanf("%ld",&n);
  for(i=1;i<=n;i++)
  {
      printf("\n 5*%ld=%ld",i,5*i);
  }
  getch();
}
