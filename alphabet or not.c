#include <stdio.h>

int main()
{
    char c;
    printf("enter a character:");;
    scanf("%c",&c);
    if ((c>='a' && c<='z')||(c<='A' && c<='Z'))
        printf("%c ia an alphabet:",c);
    else
        printf("%c is not an alphabet;",c );
    return 0;
}
