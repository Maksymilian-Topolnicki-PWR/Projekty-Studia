#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// a
// void main()
// {
//     printf("Witaj Swiecie");
// }

// b
// int main(int argc, char** argv)
// {
//     printf("Hello World");
//     return 0;
// }

// e
// int main()
// {
//     system("echo Hello World ");
//     return (0);
// }

// f
// int main()
// {
//     char cmd[50];
//     strcpy(cmd, "echo Hello World");
//     system (cmd);
//     return (0);
// }

// g
int main()
{
    char a[100]={4,1,8,8,11,-68,19,11,14,8,0,0};
    for (;a[12]<a[4];a[12]++)
    {
        printf("%c",sizeof(a)+a[a[12]]);
    }
    return 0;
}