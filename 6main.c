

#include <stdio.h>

int raqamlarSoni(int son){
    int sanoq = 0;
    if(son==0){
        return 1;
    }
    if(son<0){
        son=-son;
    }
    while(son>0){
        sanoq++;
        son/=10;
    }
    return sanoq;
}
  

int main() {
    int son;
    printf("Son kiriting: ");
    scanf("%d",&son);
       printf("Raqamlar soni: %d\n",raqamlarSoni(son));
  

    return 0;
}