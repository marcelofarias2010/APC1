#include <stdio.h>

int main() {
    char str[31];
    printf("Digite uma String: ");
    fgets(str, sizeof(str), stdin);
    printf("%s",str);
    
    return 0;
}