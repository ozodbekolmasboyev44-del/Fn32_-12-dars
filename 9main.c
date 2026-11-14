

#include <stdio.h>

int teskari(int son) {
    int natija = 0;

    while (son > 0) {
        int raqam = son % 10;
        natija = natija * 10 + raqam;
        son = son / 10;
    }

    return natija;
}

int main() {
    int son;

    printf("Son kiriting: ");
    scanf("%d", &son);

    printf("Teskari son: %d\n", teskari(son));

    return 0;
}