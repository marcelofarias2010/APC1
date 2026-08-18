# Prática 02 — Seu Primeiro Programa em C

**Aula de referência:** `Aula02.pdf`
**Pré-requisitos:** ter entendido o que é um algoritmo (Prática 01).
**Nesta prática você vai, pela primeira vez, escrever, compilar e executar um programa em C.**

## Conceitos que você precisa dominar antes de começar

- Estrutura mínima de um programa C:
```c
#include <stdio.h>

int main() {
    // seu código aqui
    return 0;
}
```
- `#include <stdio.h>` importa a biblioteca de entrada/saída padrão (necessária para usar `printf`).
- `int main()` é a função principal — todo programa C começa a executar por ela.
- `return 0;` indica que o programa terminou com sucesso.
- C é **case-sensitive** (`Main` é diferente de `main`).
- Todo comando termina com `;` (ponto e vírgula).
- Blocos de código são delimitados por chaves `{ }`.
- Comentários: `// comentário de uma linha` e `/* comentário de várias linhas */`.
- Compilação: `gcc -std=c99 -Wall -o programa.exe programa.c`.

## Antes de começar: confirme seu ambiente

1. Abra um terminal (cmd, PowerShell ou terminal do VS Code).
2. Digite `gcc --version`. Se aparecer uma versão, seu compilador está pronto. Se der erro, revise a instalação do MinGW/GCC indicada na aula.

## Exercícios

### Exercício 1 — Hello, mundo!
Crie um arquivo `ex1.c` que imprima exatamente:
```
Ola, mundo!
```
Compile com `gcc -std=c99 -Wall -o ex1.exe ex1.c` e execute. Confirme que não apareceu nenhum *warning*.

### Exercício 2 — Se apresentando
Crie `ex2.c` que imprima, em linhas separadas, seu nome completo e o nome da disciplina. Exemplo de saída:
```
Maria Oliveira
Algoritmos e Programacao de Computadores I
```
Dica: use um `printf` para cada linha, terminando com `\n` para pular linha.

### Exercício 3 — Usando comentários
Copie o programa do Exercício 2 e adicione:
- Um comentário de uma linha (`//`) explicando o que o `printf` faz, logo acima de cada `printf`.
- Um comentário de várias linhas (`/* */`) no topo do arquivo com seu nome e a data de hoje.

### Exercício 4 — Encontrando erros de propósito
Copie o código abaixo para um arquivo `ex4.c`, tente compilar, e **sem olhar a resposta**, corrija os 3 erros de sintaxe até ele compilar e rodar corretamente:

```c
#include <stdio.h>

int main() {
    printf("Testando erros")
    return 0
}
```

Depois de corrigir, escreva em um comentário no topo do arquivo quais eram os 3 erros que você encontrou.

### Exercício 5 — Arte com printf
Usando apenas comandos `printf`, faça um programa que desenhe na tela um pequeno "quadrado" feito de asteriscos, como:
```
*****
*****
*****
```
(Você ainda não aprendeu laços de repetição — é esperado que você repita o `printf` manualmente 3 vezes. Isso vai mudar em breve!)

## Desafio extra (opcional)

Pesquise o que a flag `-Wall` faz (ela já apareceu na aula). Escreva um programa pequeno que compile normalmente **sem** `-Wall`, mas que gere pelo menos um aviso quando compilado **com** `-Wall`. Explique em um comentário por que o aviso apareceu.

## Perguntas para se testar

1. O que aconteceria se você esquecesse o `#include <stdio.h>` e tentasse usar `printf`?
2. Por que `return 0;` fica no final da `main`?
3. Qual a diferença entre compilar e interpretar um programa? (Revise a Aula01b se precisar.)
4. `\n` dentro de uma string do `printf` faz o quê?

## Erros comuns nesta etapa

- Esquecer o `;` no final dos comandos.
- Esquecer alguma chave `{` ou `}`.
- Escrever `Main` ou `MAIN` em vez de `main` (C diferencia maiúsculas de minúsculas).
- Esquecer as aspas duplas `" "` ao redor do texto do `printf`.
