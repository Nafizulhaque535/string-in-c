//copy string using strcpy()

#include <stdio.h>
int main()
{
    char source[] = "C Programming";
    char target[20];

    strcpy(target, source);
    printf("source string = %s\n", source);
    printf("target string = %s\n", target);
    return 0;
}
