#include <stdio.h>

int main() {
    printf("a)\n");
    {
        int k=12, i=5, j=6;
        if (k==++i+j++)
            printf("Prawda\n");
        else
            printf("Falsz\n");
        printf("k=%d, i=%d, j=%d\n", k, i, j);
    }

    printf("b)\n");
    {
        int k=12, i=5, j=6;
        k=i++*++j;
        printf("k=%d, i=%d, j=%d\n", k, i, j);
    }

    printf("c)\n");
    {
        int k=12, i=5, j=6;
        k=i+++--j;
        printf("k=%d, i=%d, j=%d\n", k, i, j);
    }

    printf("d)\n");
    {
        float k=12, i=5, j=6;
        k=-i++/++j;
        printf("k=%g, i=%g, j=%g\n", k, i, j);
    }

    printf("e)\n");
    {
        int k=12, i=5, j=6;
        k=-i++-j--;
        printf("k=%d, i=%d, j=%d\n", k, i, j);
    }

    printf("f)\n");
    {
        int k=12, i=5, j=6;
        k+=-i++-++j;
        printf("k=%d, i=%d, j=%d\n", k, i, j);
    }

    printf("g)\n");
    {
        int k=12, i=5, j=6;
        k=i++ + ++j;
        printf("k=%d, i=%d, j=%d\n", k, i, j);
    }

    printf("h)\n");
    {
        int k=12, i=5, j=6;
        // i=*&j;
        k= *&i * j;
        printf("k=%d, i=%d, j=%d\n", k, i, j);
    }

    printf("i)\n");
    {
        int k=12, i=5, j=6, *p;
        p=&i;
        k= *p * j;
        printf("k=%d, i=%d, j=%d\n", k, i, j);
    }

    printf("j)\n");
    {
        int k=12, i=-11;
        if (-k--==--i)
            printf("Prawda\n");
        else
            printf("Falsz\n");
        printf("k=%d, i=%d\n", k, i);
    }

    printf("k)\n");
    {
        int k=12, i=5, j=6;
        k^=i^j;
        printf("k=%d, i=%d, j=%d\n", k, i, j);
    }

    printf("l)\n");
    {
        int k=12, i= 5, j=6;
        if (++k == ++k + (--i^j--))
            printf("Prawda\n");
        else
            printf("Falsz\n");
        printf("k=%d, i=%d, j=%d\n", k, i, j);
    }
}

