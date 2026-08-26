#include <stdio.h>
int idade;
float altura;
char inicial;
int aprovacao;

int main(){
    idade = 45;
    altura = 1.81;
    inicial = 'M';
    aprovacao = 1;

    printf("Idade: %d\n",idade);
    printf("Altura: %f\n", altura);
    printf("Inicial do nome: %c\n", inicial);
    printf("Aprovação %d\n", aprovacao);
}