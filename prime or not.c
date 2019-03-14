#include <stdio.h>

int main()
{
 int i,n,count=0;
 printf("\n enter  the number\n");
 scanf("%d",&n);
 for(i=1;i<=n/2;i++)
 {
     if(n%i==0)
     {
         count++;
     }
 }
 
 if (count==1)
 {
     printf("yes");
 }
 else
 {
     printf("no");
 }
}
