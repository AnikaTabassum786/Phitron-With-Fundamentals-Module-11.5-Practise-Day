#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char a[51];
        char b[51];

        scanf("%s %s", a, b);
        // printf("%s %s\n", a, b);

        int length_a=strlen(a);
        int length_b=strlen(b);

        int i;
        for( i=0;i<length_a && i<length_b;i++){
          printf("%c%c",a[i],b[i]);
        }

        if(i<length_a){
             for(;i<length_a;i++);
             printf("%c",a[i]);
        }

        if(i<length_b){
             for(;i<length_b;i++);
             printf("%c",b[i]);
        }

        printf("\n");
    }

    
    

    return 0;
}