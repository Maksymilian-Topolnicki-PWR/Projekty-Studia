#include <stdio.h>
#include <math.h>

int main() {
    // // a
    // {
    //     int A[4], licz=0;
    //     int ile2=0, ile3=0, ile4=0;
    //     printf("Podaj 4 liczby calkowite\n");
    //     for (int i=0; i<4; i++) {
    //         printf("Podaj liczbe 1: ");
    //         scanf("%d", &A[i]);
    //     }
    //
    //     for (int i=0; i<4; i++) {
    //         for (int j=1; j<4; j++) {
    //             if (i==j)
    //                 continue;
    //             if (A[i]==A[j]) {
    //
    //             }
    //         }
    //     }
    //
    //     printf("Liczba 2: %d\n", ile2);
    //     printf("Liczba 3: %d\n", ile3);
    //     printf("Liczba 4: %d", ile4);
    //
    // }


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

    // // c
    // {
    //     float a, b, c, d;
    //     float srednia;
    //     printf("Podaj liczby: \n");
    //     scanf("%f %f %f %f", &a, &b, &c, &d);
    //
    //     float A[4]={a, b, c, d};
    //     for (int i=0;i<3;i++) {
    //         for (int j=0; j<3-i;j++) {
    //             if (A[j]>A[j+1]) {
    //                 float temp;
    //                 temp=A[j];
    //                 A[j]=A[j+1];
    //                 A[j+1]=temp;
    //             }
    //         }
    //     }
    //
    //     srednia=(A[2]+A[3])/2.0;
    //     printf("Srednia dwoch najwiekszych liczb: %g", srednia);
    //
    // }

    // // d
    // {
    //     float a, b, c;
    //
    //     scanf("%f %f %f", &a, &b, &c);
    //
    //     if (a>c) {
    //         float temp=c;
    //         c=a;
    //         a=temp;
    //     }
    //     if (b>c) {
    //         float temp=b;
    //         b=c;
    //         c=temp;
    //     }
    //     if (a>b) {
    //         float temp=a;
    //         a=b;
    //         b=temp;
    //     }
    //
    //
    //     printf("%g %g %g", a, b, c);
    //
    // }

    // // e
    // {
    //     float a, b, c, d;
    //     int ile_ujemnych=0;
    //
    //     scanf("%f %f %f %f", &a, &b, &c, &d);
    //
    //     if (a<0)
    //         ile_ujemnych++;
    //     if (b<0)
    //         ile_ujemnych++;
    //     if (c<0)
    //         ile_ujemnych++;
    //     if (d<0)
    //         ile_ujemnych++;
    //
    //     printf("Wartosci ujemne maja %d liczby", ile_ujemnych);
    // }

    // // f
    // {
    //     int a, b, c;
    //     float delta, x1, x2;
    //     printf("Podaj A:");
    //     scanf("%d", &a);
    //     printf("Podaj B:");
    //     scanf("%d", &b);
    //     printf("Podaj C:");
    //     scanf("%d", &c);
    //     delta=(b*b)-(4*a*c);
    //     if (delta>0) {
    //         x1=(-b+sqrt(delta))/(2*a);
    //         x2=(-b-sqrt(delta))/(2*a);
    //         printf("x1 = %g, x2 = %g", x1, x2);
    //     }
    //     else if (delta==0) {
    //         x1=(-b)/(2*a);
    //         printf("x1 = %g", x1);
    //     }
    //     else {
    //         printf("Rownanie nie ma rozwiazan");
    //     }
    // }

    // // g
    // {
    //     int a, b, c, d, para;
    //     scanf("%d %d %d %d", &a, &b, &c, &d);
    //     if (a==b)
    //         para++;
    //     if (a==c)
    //         para++;
    //     if (a==d)
    //         para++;
    //     if (b==c)
    //         para++;
    //     if (b==d)
    //         para++;
    //     if (c==d)
    //         para++;
    //     printf("%d", para);
    // }

    // // h
    // {
    //     char b, a, j, t;
    //     int licznik=0;
    //     scanf("%c %c %c %c", &b, &a, &j, &t);
    //     if (b=='b'|| a=='b'|| j=='b'|| t=='b')
    //         licznik++;
    //     if (b=='a'|| a=='a'|| j=='a'|| t=='a')
    //         licznik++;
    //     if (b=='j'|| a=='j'|| j=='j'|| t=='j')
    //         licznik++;
    //     if (b=='t'|| a=='t'|| j=='t'|| t=='t')
    //         licznik++;
    //     if (licznik==4) {
    //         printf("Tak");
    //     }
    // }

    // i
    {
        char a, b, c, d;
        scanf("%c %c %c %c", &a, &b, &c, &d);
        int licznik=0;
        if (a>='0' && a<='9') {
            licznik++;
        }
        if (b>='0' && b<='9') {
            licznik++;
        }
        if (c>='0' && c<='9') {
            licznik++;
        }
        if (d>='0' && d<='9') {
            licznik++;
        }
        if (licznik>2) {
            printf("Wiecej liczb");
        }
        else if (licznik<2){
            printf("Wiecej liter");
        }
        else {
            printf("Rowno liczb i cyfr");
        }
    }
}