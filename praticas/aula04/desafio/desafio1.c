#include <stdio.h>

int main() {
    int x = 5/2; 
    int y = x++; 
    int z = x%2; 

    printf("Valor de x: %d\n",x);
    printf("Valor de y: %d\n",y);
    printf("Valor de z: %d\n",z);

    return 0;
}