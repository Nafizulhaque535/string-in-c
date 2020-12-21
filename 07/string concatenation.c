//concatenation using strcat() function...

#include <stdio.h>
int main()
{
    char str1[] = "My name is ";
    char str2[] = "Nafizul Haque";

    strcat(str1, str2);

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    return 0;
}
