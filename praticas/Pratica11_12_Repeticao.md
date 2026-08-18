# Prática 11/12 — Comandos de Repetição (for, while, do-while)

**Aula de referência:** `Aula11_12.pdf`
**Pré-requisitos:** comandos de seleção (Prática 09/10).
**A partir daqui seus programas podem repetir tarefas automaticamente** — não é mais preciso copiar e colar `printf` várias vezes como na Prática 02!

## Conceitos que você precisa dominar antes de começar

- `for (inicializacao; condicao; incremento) { ... }` — repetição **determinada** (você sabe de antemão quantas vezes vai repetir, ou tem uma condição de parada clara).
- `while (condicao) { ... }` — repetição que testa a condição **antes** de cada execução; pode nunca executar se a condição já for falsa.
- `do { ... } while (condicao);` — repetição que testa a condição **depois**; executa **pelo menos uma vez**.
- Laços aninhados: um `for`/`while` dentro de outro.
- `break` interrompe o laço imediatamente.
- `continue` pula para a próxima iteração, ignorando o restante do bloco naquela volta.
- Cuidado com laços infinitos (`for(;;)`, `while(1)`) — sempre garanta uma condição de parada (geralmente com `break`).

## Exercícios

### Exercício 1 — Contagem simples
Use um `for` para imprimir os números de 1 a 20.

### Exercício 2 — Contagem regressiva
Use um `for` com passo negativo para imprimir uma contagem regressiva de 10 até 1, e depois imprima "Fim!".

### Exercício 3 — Soma de N números com `while`
Peça ao usuário para digitar números inteiros, um de cada vez, até que ele digite `0` (zero) — o `0` não deve entrar na soma. Ao final, mostre a soma total e a quantidade de números digitados (sem contar o `0`). Use `while`.

### Exercício 4 — Validação de entrada com `do-while`
Peça ao usuário para digitar uma idade. Se ele digitar um valor negativo, o programa deve pedir novamente, repetindo até que um valor válido (≥ 0) seja digitado. Use `do-while`, já que é necessário pedir a entrada **pelo menos uma vez** antes de checar a condição.

### Exercício 5 — Tabuada
Peça um número inteiro e imprima sua tabuada completa (de 1 a 10), no formato:
```
7 x 1 = 7
7 x 2 = 14
...
7 x 10 = 70
```

### Exercício 6 — Laços aninhados: tabela de multiplicação
Imprima a tabuada de 1 a 5 **inteira**, usando dois `for` aninhados (um para o número da tabuada, outro para o multiplicador de 1 a 10). Organize a saída de forma clara, separando cada tabuada.

### Exercício 7 — `break` e `continue`
Escreva um programa que leia números inteiros digitados pelo usuário em um laço `for(;;)` (infinito):
- Se o número digitado for negativo, use `continue` para ignorá-lo e pedir o próximo.
- Se o número digitado for `-999`, use `break` para encerrar o laço.
- Some todos os números positivos digitados e mostre o total ao final.

### Exercício 8 — Contando pares (revisão do desafio da aula)
Leia números inteiros até que o usuário digite `0`, contando quantos deles são pares. Ao final, informe o total de pares encontrados. Implemente **duas versões**: uma com `while` e outra com `do-while`. Em um comentário, explique qual das duas ficou mais adequada para esse problema e por quê.

## Desafio extra (opcional)

Desenhe um triângulo de asteriscos usando laços aninhados, do tipo:
```
*
**
***
****
*****
```
O tamanho do triângulo (quantidade de linhas) deve ser lido do usuário. Dica: o laço externo controla a linha, o laço interno controla quantos `*` imprimir naquela linha.

## Perguntas para se testar

1. Quando você deve preferir `do-while` em vez de `while`?
2. O que diferencia `break` de `continue` dentro de um laço?
3. Por que `for(;;)` é considerado um laço infinito, e como você o interrompe de forma segura?
4. Em um laço aninhado, qual laço "gira mais rápido": o externo ou o interno?

## Erros comuns nesta etapa

- Esquecer de atualizar a variável de controle dentro de um `while`, criando um laço infinito sem querer.
- Confundir quando usar `while` (pode não executar nenhuma vez) com `do-while` (executa ao menos uma vez).
- Trocar os índices dos laços aninhados, fazendo o laço interno usar a variável do laço externo por engano.
- Usar `break` quando na verdade o objetivo era `continue` (ou vice-versa).
