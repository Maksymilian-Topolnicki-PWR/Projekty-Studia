#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// a
// int main()
// {
//     int a, b, s;
//     printf("Podaj a: ");
//     scanf("%d", &a);
//     printf("Podaj b: ");
//     scanf("%d", &b);
//     if (a>b)
//     {
//         printf("Pierwsza liczba jest wieksza od drugiej \n");
//     }
//     else
//     {
//         if (a==b)
//         {
//             printf("Podane liczby są rowne \n");
//         }
//         else
//         {
//             printf("Druga liczba jest wieksza od pierwszej \n");
//         }
//     }
//     s=a+b;
//     printf("Suma wprowadzonych liczb wynosi: %d", s);
//     return 0;
// }


// b
// int main()
// {
//     int a, b, c, s;
//     float sr, n=0;
//     printf("Wprowadz a: ");
//     scanf("%d", &a);
//     n++;
//     printf("Wprowadz b: ");
//     scanf("%d", &b);
//     n++;
//     printf("Wprowadz c: ");
//     scanf("%d", &c);
//     n++;
//     s=a+b+c;
//     sr=s/n;
//     if (sr>5)
//     {
//         printf("Wysoka srednia \n");
//         printf("Srednia: %g \n", sr);
//     }
//     else
//     {
//         printf("Srednia: %g \n", sr);
//
//     }
//     printf("Suma: %d", s);
//     return 0;
// }


// c
// int main()
// {
//     float a, b, c, p, q, x1, x2, oy, delta, funkcja;
//     printf("Wprowadz a: ");
//     scanf("%f", &a);
//     while (a==0)
//     {
//         printf("Funkcja nie jest kwadratowa (a=0), podaj a: ");
//         scanf("%f", &a);
//     }
//     printf("Wprowadz b: ");
//     scanf("%f", &b);
//     printf("Wprowadz c: ");
//     scanf("%f", &c);
//     delta=(b*b)-(4*a*c);
//     p=-b/(2*a);
//     q=(-delta)/(4*a);
//     oy=c;
//
//     // printf("Delta: %g \n", delta);
//     printf("Wspolrzedne wierzcholka paraboli to: (%g, %g) \n", p, q);
//     printf("Przeciecie z osia OY: (0, %g)\n", c);
//     if (delta>0)
//     {
//         x1=(-b-sqrt(delta))/(2*a);
//         x2=(-b+sqrt(delta))/(2*a);
//         printf("Miejsca zerowe: x1 = %g, x2 = %g \n", x1, x2);
//     }
//     else if (delta==0)
//     {
//         x1=-b/(2*a);
//         printf("Miejsce zerowe: x0 = %g \n", x1);
//     }
//     else
//     {
//         printf("Funckja nie posiada miejsc zerowych!");
//         return 0;
//     }
// }


// d
int main()
{
    char znak;
    int rozmiar, i, j;
    printf("Podaj rozmiar trojkata: ");
    scanf(" %d", &rozmiar);
    printf("Podaj znak: ");
    scanf(" %c", &znak);

    for (i=0; i<rozmiar; i++)
    {
        for (j=0; j<i; j++)
        {
            printf("%c", znak);
        }
        printf("\n");
    }

}

// d+
// void trojkat(int rozmiar, char znak, int kolor);
//
// int main()
// {
//     int a;
//     char b;
//     int kolor;
//     printf("Podaj rozmiar trojkata: ");
//     scanf(" %d", &a);
//     printf("Podaj znak: ");
//     scanf(" %c", &b);
//     printf("Wybierz kolor: \n");
//     printf("1 - Czerwony\n");
//     printf("2 - Zielony\n");
//     printf("3 - Zolty\n");
//     printf("4 - Niebieski\n");
//     printf("5 - Magenta\n");
//     printf("6 - Cyjan\n");
//     printf("7 - Bialy\n");
//     scanf("%d", &kolor);
//
//     trojkat(a, b, kolor);
//     return 0;
// }
//
// void trojkat(int rozmiar, char znak, int kolor)
// {
//
//     int i, j;
//     const char *kolory[] =
//     {
//         "\033[31m",
//         "\033[32m",
//         "\033[33m",
//         "\033[34m",
//         "\033[35m",
//         "\033[36m",
//         "\033[37m",
//
//     };
//
//     if (kolor <1 || kolor > 7)
//         kolor = 7; // Domyślnie biały
//
//     printf("%s", kolory[kolor - 1]);
//     for (i=0; i<rozmiar; i++)
//          {
//              for (j=0; j<=i; j++)
//              {
//                  printf("%c", znak);
//              }
//              printf("\n");
//          }
//     printf("\033[0m");
// }