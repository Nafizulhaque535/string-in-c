//String compare using strcmp() function...

#include <stdio.h>
int main()
{
    char str1[] = "Nafiz";
    char str2[] = "Nafiz";

    int d = strcmp(str1, str2);

    if(d == 0){
        printf("Strings are equal");
    }
    else{
        printf("Strings are not equal");
    }

    return 0;
}
