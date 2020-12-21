//strupr() and strlwr()

#include <stdio.h>
int main()
{
    char str1[] = "Nafizul Haque";
    char str2[] = "Nafizul Haque";

    strupr(str1);
    strlwr(str2);

    printf("String Upper : %s\n", str1);
    printf("String Lower : %s\n", str2);

    return 0;
}
