

#include <stdio.h>

int yosh(int yil) {
    return 2026 - yil;
}

int main() {
    int yil;

    printf("Tug'ilgan yilingizni kiriting: ");
    scanf("%d", &yil);

    printf("Sizning yoshingiz: %d\n", yosh(yil));

    return 0;
}