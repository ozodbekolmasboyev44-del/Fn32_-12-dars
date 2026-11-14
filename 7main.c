

#include <stdio.h>

int kichikSon(int a,int b,int c){
 if(a<b && a<c){
     return a;
 }else if(b<a && b<c){
     return b;
 }else if(c<a && c<b) {
     return c;
 }
}

int main() {
    int a,b,c;
    
    printf("Sonlarni kiring: ");
    scanf("%d %d %d",&a,&b,&c);

    printf("Eng kichik son: %d",kichikSon(a,b,c));

    return 0;
}