

#include <stdio.h>

int musbatmi(int son) {
    if (son > 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int son;

    printf("Son kiriting: ");
    scanf("%d", &son);

    printf("%d", musbatmi(son));

    return 0;
}