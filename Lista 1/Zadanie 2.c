#include <stdio.h>
#include <math.h>

// a
int main()
{
    float p, r;
    printf("Podaj r: ");
    scanf("%f", &r);
    while (r<0)
    {
        printf("Promien nie moze byc mniejszy od 0 \n");
        printf("Podaj r: ");
        scanf("%f", &r);
    }
    p = M_PI * r * r;
    printf("%f", p);
}

// b
// int main()
// {
//     float v, r, u;
//     u=4.0/3.0;
//     printf("Podaj r: ");
//     scanf("%f", &r);
//     while (r<0)
//     {
//         printf("Promien nie moze byc mniejszy od 0 \n");
//         printf("Podaj r: ");
//         scanf("%f", &r);
//     }
//     v = u*M_PI*r*r*r;
//     printf("%f", v);
// }

// c
// int main()
// {
//     float a, b, c;
//     printf("Podaj a: ");
//     scanf("%f", &a);
//     printf("Podaj b: ");
//     scanf("%f", &b);
//     c = sqrt((a*a)+(b*b));
//     printf("%g", c);
// }

// d
// int main()
// {
//     float a, b, d, c, gama;
//     printf("Podaj a: ");
//     scanf("%f", &a);
//     printf("Podaj b: ");
//     scanf("%f", &b);
//     printf("Podaj kat w stopniach: ");
//     scanf("%f", &d);
//     gama = d*M_PI/180;
//     c = sqrt((a*a)+(b*b)-2*a*b*cos(gama));
//     printf("%f", c);
// }

// e
// int main()
// {
//     int n;
//     float a, k, p;
//     printf("Podaj a: ");
//     scanf("%f", &a);
//     printf("Podaj n: ");
//     scanf("%d", &n);
//     printf("Podaj p: ");
//     scanf("%f", &p);
//     k = a*pow((1+(p/100)), n);
//     printf("%f", k);
// }

// f
// int main()
// {
//     float a, b, c, w;
//     printf("Podaj a: ");
//     scanf("%f", &a);
//     printf("Podaj b: ");
//     scanf("%f", &b);
//     printf("Podaj c: ");
//     scanf("%f", &c);
//     if (b+c==0)
//     {
//         printf("Suma b+c nie moze byc rowna 0 \n");
//         printf("Podaj b: ");
//         scanf("%f", &b);
//         printf("Podaj c: ");
//         scanf("%f", &c);
//     }
//     w=((a*b)/(b+c))+((a*c)/(b+c));
//     printf("%g", w);
// }