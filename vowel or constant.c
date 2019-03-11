#include <stdio.h>

int main()
{
    char c;
    int isLowercaseVowel1,isUppercaseVowel1;
    printf("enter an alphabet:");;
    isLowercaseVowel1=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    isUppercaseVowel1=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(isLowercaseVowel1||isUppercaseVowel1)
        printf("%c  is a vowel:",c);
    else
        printf("%c is a constant:",c);
    return 0;
}
