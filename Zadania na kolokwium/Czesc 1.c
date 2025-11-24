#include <stdio.h>

int main() {
    // a
    {
        int A[4], licz=0;
        int ile2=0, ile3=0, ile4=0;
        printf("Podaj 4 liczby calkowite\n");
        for (int i=0; i<4; i++) {
            printf("Podaj liczbe 1: ");
            scanf("%d", &A[i]);
        }

        for (int i=0; i<4; i++) {
            for (int j=1; j<4; j++) {
                if (i==j)
                    continue;
                if (A[i]==A[j]) {

                }
            }
        }



        printf("Liczba 2: %d\n", ile2);
        printf("Liczba 3: %d\n", ile3);
        printf("Liczba 4: %d", ile4);

    }


    // // b
    // {
    //     char znak;
    //     int t=0, a=0, o=0;
    //
    //     printf("Wpisuj znaki: ");
    //
    //     while (1) {
    //         scanf("%c", &znak);
    //         if (znak=='t')
    //             t++;
    //         if (znak=='a')
    //             a++;
    //         if (znak=='o')
    //             o++;
    //
    //         if (t>=2 && a>=1 && o>=1) {
    //             printf("Mozna zlozyc slowo tato!");
    //             break;
    //         }
    //     }
    //
    // }

    // c
    {

    }
}