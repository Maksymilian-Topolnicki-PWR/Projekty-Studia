#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // a
    // {
    //     int n;
    //     printf("Ile chcesz wyrazow w tablicy: ");
    //     scanf("%d", &n);
    //
    //     double A[n];
    //     for (int i=0; i<n; i++) {
    //         scanf("%lg", &A[i]);
    //     }
    //     printf("A = {");
    //     for (int i=0; i<n; i++) {
    //         printf("%g", A[i]);
    //         if (i<n-1) {
    //             printf(", ");
    //         }
    //     }
    //     printf("}");
    //
    //     printf("\n");
    //
    //     double B[n];
    //     srand(time(0));
    //     printf("B = {");
    //     for (int i=0; i<n; i++) {
    //         B[i]=(float)rand()/RAND_MAX*100;
    //         printf("%g", B[i]);
    //         if (i<n-1) {
    //             printf(", ");
    //         }
    //     }
    //     printf("}");
    //
    //     printf("\n");
    //
    //     double C[n];
    //     printf("C = {");
    //     for (int i=0; i<n; i++) {
    //         C[i]=A[i]*B[i];
    //         printf("%g", C[i]);
    //         if (i<n-1) {
    //             printf(", ");
    //         }
    //     }
    //     printf("}");
    // }

    // b
    // {
    //     int D[10][3];
    //     int silnia(int n);
    //     int fib(int n);
    //     printf("n        SIL  FIB\n");
    //     for (int i=0; i<10; i++) {
    //         D[i][0]=i+1;
    //         D[i][1]=silnia(i);
    //         D[i][2]=fib(i);
    //         }
    //
    //     for (int i=0; i<10; i++){
    //         printf("%-2d  %8d %4d\n", D[i][0], D[i][1], D[i][2]);
    //     }
    //
    // }


    // c
    {
        void A();
        void B();
        void C();
        void wypisanie();
        int n=5;
        double tabA[n], tabB[n], tabC[n];
        A(tabA, n);
        B(tabB, n);
        C(tabA, tabB, tabC, n);
        wypisanie(tabA, tabB, tabC, n);
    }
}


// Funkcje

int silnia(int n) {
    int liczba_silni=1;
    for (int i=1; i<=n+1; i++) {
        liczba_silni*=i;
    }
    return liczba_silni;
}

int fib(int n) {
    int liczba_poprzednia=1, liczba_fib=1;
    for (int i=0; i<n; i++) {
        liczba_poprzednia+=liczba_fib;
        liczba_fib = liczba_poprzednia-liczba_fib;
    }
    return liczba_fib;
}

void A(double A[], int n) {
    for (int i=0; i<n; i++)
        scanf("%lg", &A[i]);
}

void B(double B[], int n) {
    srand(time(0));
    for (int i=0; i<n; i++)
        B[i]=(float)rand()/RAND_MAX*100;
}

void C(double A[], double B[], double C[], int n) {
    for (int i=0; i<n; i++)
        C[i]=A[i]*B[i];
}

void wypisanie(double A[], double B[], double C[], int n) {
    printf("A = {");
    for (int i=0; i<n; i++) {
        printf("%g", A[i]);
        if (i<n-1)
            printf(", ");
    }
    printf("}\n");

    printf("B = {");
    for (int i=0; i<n; i++) {
        printf("%g", B[i]);
        if (i<n-1)
            printf(", ");
    }
    printf("}\n");

    printf("C = {");
    for (int i=0; i<n; i++) {
        printf("%g", C[i]);
        if (i<n-1)
            printf(", ");
    }
    printf("}blablabla");
}