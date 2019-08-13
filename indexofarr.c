#include<stdio.h>
int main()
{
    int  arr[100],len,i,j,temp,n;
    printf("enter the size of array");
    scanf("%d",&len);
    printf("\n enter the array  elements");
    for (i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n enter which kth number you want");
    scanf("%d",&n);
    printf("\n the %d kth number is :%d",n,arr[n-1]);
    return 0;
}
