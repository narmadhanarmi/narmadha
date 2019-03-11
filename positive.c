#include <stdio.h>

int main()
{
    double number;
    printf("enter a number:");
    scanf("%lf",&number);
    if (number <=0.0)
    {
        if (number==0.0)
           printf("you entered zero.");
        else
           printf("you entered a negative number. ");
    }
    else
        printf("you entered a positive number.");
    return 0;
}
