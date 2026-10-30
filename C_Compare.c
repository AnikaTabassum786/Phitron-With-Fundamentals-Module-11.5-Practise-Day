#include <stdio.h>
#include <string.h>

int main()
{

    char a[21];
    char b[21];
    scanf("%s %s", a, b);
    // printf("%s %s",a,b);

    int result = strcmp(a, b);
    //    printf("%d",result);

    if (result < 0)
    {
        printf("%s", a);
    }
    
    else if (result == 0)
    {
        printf("%s", a);
    }
    if (result > 0)
    {
        printf("%s", b);
    }

    return 0;
}