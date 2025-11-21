#include <stdio.h>
#include <math.h>

// a
// int main() {
//     printf("ASCII   ZNAK     L.16     L.8 \n");
//     for (int i=32; i<=127; i++)
//     {
//         printf("|%3d|   | %c |   | %x |   |%3o|\n", i,i,i,i);
//     }
//     return 0;
// }

// b
// int main()
// {
//     for (int i=0; i<=10; i++)
//     {
//         printf("%.*f\n",i ,M_PI);
//     }
// }

// d
// int main()
// {
//     int zmienna, max=0, min=0;
//     double suma=0, srednia;
//     printf("Podaj 10 liczb: ");
//     int tablica[10];
//     for (int i=0; i<=9; i++)
//     {
//         scanf("%d", &zmienna);
//         tablica[i]=zmienna;
//         suma+=tablica[i];
//     }
//     for (int i=0; i<=9; i++)
//     {
//         if (tablica[i]>max)
//         {
//             max=tablica[i];
//         }
//     }
//     min=max;
//     for (int i=0; i<=9; i++)
//         if (tablica[i]<min)
//         {
//             min=tablica[i];
//         }
//     srednia=(suma/10.0);
//     printf("Suma = %g, Srednia = %g, W_MAX = %d, W_MIN=%d", suma, srednia, max, min);
// }

// e
int main()
{
    int n=5, i=1;
    double suma_szeregu=0.0f, szereg;
    for (int k=1; k<=n; k++)
    {
        szereg=(float)1/(3*k+1);
        suma_szeregu+=szereg;
    }
    printf("%.10f", suma_szeregu);
}