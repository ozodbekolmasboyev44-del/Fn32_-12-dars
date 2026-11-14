

#include <stdio.h>

int yuza(int uzinlig, int kenglig){
    int yuza = uzinlig*kenglig;
    return yuza;
}
    


int main() {
    int uzinlig,kenglig;
    printf("Kvadratni uzinligi kiriting:");
    scanf("%d",&uzinlig);
    
    printf("Kvadratni kenglig kiriting:");
    scanf("%d",&kenglig);
    printf("Kvadratning yuzasi: %d",yuza(uzinlig,kenglig));

   
    return 0;
}