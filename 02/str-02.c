//input and display string...
#include <stdio.h>
int main()
{
    char str1[100];

    printf("Enter your full name : ");
    gets(str1);

    printf("Full name : %s\n", str1);
    return 0;
}
