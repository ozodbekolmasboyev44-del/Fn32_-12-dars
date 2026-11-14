

#include <stdio.h>

int boluvchilar(int son){
    int sanoq=0;
    
     for (int i = 1; i <= son; i++) {
        if (son % i == 0) {
            sanoq++;
    }
     }
     return sanoq;
}

int main() {
    int son;
    
    printf("Son kiring: ");
    scanf("%d",&son);

     printf("Bo'luvchilar soni: %d\n", boluvchilar(son));

    

    return 0;
}