#include <stdio.h>

int main()
{
    int m=5,n=10,num;
    printf("print the odd numbers in a given range m to n:\n");
    for(num=m;num<=n;num++)
    {
        if(num%2==1)
         printf("%d",num);
    }

    getch();
}
