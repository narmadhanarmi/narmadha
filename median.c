#include <stdio.h>

int main()
{
    int n,i,j,temp;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                a[i]=temp;
                a[j]=a[i];
                temp=a[j];
            }
        }
    }
    i=n/2;
    printf("%d",a[i]);
    return 0;
}
