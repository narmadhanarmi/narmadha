#include <stdio.h>

int main()
{
    int base ,exponent;
    long long result=1;
    printf("enter the number:");
    scanf("%d",&base);
    printf("enter the exponent:");
    scanf("%d",&exponent);
    while(exponent !=0)
    {
        result *=base;
        --exponent;
    }
    printf("answer=%llld",result);
    return 0;
}
