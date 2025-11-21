#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // // a
    // {
    //     int n;
    //     printf("Ile chcesz wyrazow w tablicy: ");
    //     scanf("%d", &n);
    //
    //     double A[n];
    //     for (int i=0; i<n; i++) {
    //         printf("Podaj %d wyraz tablicy: ", (i+1));
    //         scanf("%lg", &A[i]);
    //     }
    //     printf("A = {");
    //     for (int i=0; i<n; i++) {
    //         printf("%g", A[i]);
    //         if (i<n-1) {
    //             printf(", ");
    //         }
    //     }
    //     printf("}\n");
    //
    //     double B[n];
    //     srand(time(0));
    //     printf("B = {");
    //     for (int i=0; i<n; i++) {
    //         B[i]=(double)rand()/RAND_MAX*100;
    //         printf("%g", B[i]);
    //         if (i<n-1) {
    //             printf(", ");
    //         }
    //     }
    //     printf("}\n");
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
    //     printf("}\n\n");
    // }
    //
    // // b
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
    //     printf("\n");
    // }
    //
    //
    // // c
    // {
    //     void A(double A[], int n);
    //     void B(double B[], int n);
    //     void C(double A[], double B[], double C[], int n);
    //     void wypisanie(double A[], double B[], double C[], int n);
    //     int n;
    //     printf("Ile chcesz wyrazow w tablicy: ");
    //     scanf("%d", &n);
    //     double tabA[n], tabB[n], tabC[n];
    //     A(tabA, n);
    //     B(tabB, n);
    //     C(tabA, tabB, tabC, n);
    //     wypisanie(tabA, tabB, tabC, n);
    // }
    //
    // d
    // {
    //     int pot_liczby(int a, int n);
    //     int a, n;
    //     printf("Podaj a: ");
    //     scanf("%d",&a);
    //     printf("Podaj n: ");
    //     scanf("%d",&n);
    //     printf("%d", pot_liczby(a, n));
    // }

    // Zadanie dodatkowe
    {
        int rozA1, rozB1, rozA2, rozB2;
        int A[rozA1][rozA2], B[rozB1][rozB2];
        char operacja;
        rozA1=2;
        rozA2=2;
        rozB1=2;
        rozB2=2;
        // printf("Podaj rozmiar macierzy A: ");
        // scanf("%d %d", &rozA1, &rozA2);
        // printf("Podaj rozmiar macierzy B: ");
        // scanf("%d %d", &rozB1, &rozB2);
        printf("Podaj operacje do wykonania na macierzach (+,  -,  *,  T: ");
        scanf("%c", &operacja);
        if (operacja=='+') {
            if (rozA1==rozB1 | rozA2==rozB2) {

            }
        }
        if (operacja=='-') {

        }
        if (operacja=='*') {

        }
        if (toupper(operacja)=='T') {

        }
        else {
            printf("Błędna operacja!");
        }
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
    for (int i=0; i<n; i++) {
        printf("Podaj %d wyraz tablicy: ", (i+1));
        scanf("%lg", &A[i]);
    }
}

void B(double B[], int n) {
    srand(time(0));
    for (int i=0; i<n; i++)
        B[i]=(double)rand()/RAND_MAX*100;
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
    printf("}");
}

int pot_liczby(int a, int n) {
    if (n==0)
        return 1;
    else if (n>0)
        return a*pot_liczby(a, n-1);
    else
        return a/n;
}