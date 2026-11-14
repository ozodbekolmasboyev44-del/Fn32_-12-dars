

#include <stdio.h>
int oxirgiRaqm(int raqam){
   return raqam %10;
        
    }
    


int main() {
    int raqam;
    printf("Son kiriting:");
    scanf("%d",&raqam);

    printf("Oxirgi raqam: %d\n", oxirgiRaqm(raqam));

    return 0;
}