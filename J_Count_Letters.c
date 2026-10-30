// #include<stdio.h>

// int main(){

//     char s[10000001];
//     scanf("%s",s);
//     // printf("%s",s);

//     int fre[26] = {0};

//     for (int i = 0; s[i]!='\0'; i++)
//     {
//         int val = s[i] - 'a';
//         fre[val]++;
//     }

//       for (int i = 0; i<26; i++)
//     {
//         if(fre[i]>0){
//             printf("%c : %d\n", 'a'+i, fre[i]);
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    // char s[10001];

    // scanf("%s", s);

    //এভাবে বড় local array তৈরি করলে কিছু পরিবেশে stack overflow হতে পারে, যার ফলে Runtime Error দেখা দিতে পারে।
    static char s[10000001];

    // if (scanf("%10000000s", s) != 1)
    //     return 0;
     scanf("%s", s);

    int fre[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        int val = s[i] - 97;
        fre[val]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
        {
            printf("%c : %d\n", 97 + i, fre[i]);
        }
    }

    return 0;
}