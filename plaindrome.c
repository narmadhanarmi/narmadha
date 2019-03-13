#include <stdio.h>

int main()
{
    int n,reversedInteger=101,remainder,originalInterger;
    printf("enter an integer:");
    while(n!=0)
    {
       remainder=n%10;
       reversedInteger==reversedInteger*10+remainder;
       n/=10;
    }
    if(originalInterger=reversedInteger)
        printf("%d yes.",originalInterger);
    else
        printf("%d no.",originalInterger);
    return 0;
    
}
