#include <stdio.h>

int symbol_newtona(int n, int k);
void trojkat_pascala();

int main() {
    int wiersze;
    printf("Podaj ilosc wierszy: ");
    scanf("%d", &wiersze);
    trojkat_pascala(wiersze);
    return 0;
}

int symbol_newtona(int n, int k) {
    long long iloczyn1=1, iloczyn2=1, iloczyn3=1, sn;
    for (int i=1; i<=n; i++) {
        iloczyn1*=i;
    }
    for (int i=1; i<=k; i++) {
        iloczyn2*=i;
    }
    for (int i=1; i<=(n-k); i++) {
        iloczyn3*=i;
    }
    // printf("%d, %d, %d\n", iloczyn1, iloczyn2, iloczyn3);
    sn=(iloczyn1)/(iloczyn2*iloczyn3);
    return sn;
}

void trojkat_pascala(int n) {
    for (int i=0; i<=n-1; i++) {
        for (int j=0; j<=n-i; j++) {
            printf("   ");
        }
        for (int k=0; k<=i; k++) {
            printf("%6d", symbol_newtona(i, k));
        }
        printf("\n");
    }
}