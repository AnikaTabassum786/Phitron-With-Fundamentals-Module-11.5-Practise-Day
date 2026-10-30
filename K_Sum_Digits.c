#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);


    char s[1000001];
    scanf("%s",s);
    // printf("%s\n",s);

    int length=strlen(s);
    // printf("%d\n",length);

    int sum=0;
    for(int i=0;i<length;i++){
       sum = sum + s[i] - 48;
    }

    printf("%d",sum);
    return 0;
}