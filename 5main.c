

#include <stdio.h>

int yigindi(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
    sum+=i;
    }
    return sum;
}
int main() {
    int n;
printf("Son kiriting:");
    scanf("%d",&n);
    
    printf("Yigindi: %d",yigindi(n));
  

    return 0;
}