

#include <stdio.h>

void jadval(int son){
   for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", son, i, son * i);
    }
}

int main() {
    int son;

    printf("Son kiriting: ");
    scanf("%d", &son);

    jadval(son);
    return 0;
}