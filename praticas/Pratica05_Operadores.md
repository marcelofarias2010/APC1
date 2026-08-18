# Prática 05 — Operadores e Conversão de Tipos

**Aula de referência:** `Aula05_Operadores.pdf`
**Pré-requisitos:** saber declarar variáveis dos tipos básicos (Prática 03/04).

## Conceitos que você precisa dominar antes de começar

- Operadores aritméticos: `+ - * / %` e os compostos `+= -= *= /= %=`.
- Incremento/decremento: `++`/`--`, e a diferença entre a forma **prefixa** (`++x`) e **sufixa** (`x++`).
- Operadores relacionais: `== != > >= < <=` (retornam `1` para verdadeiro ou `0` para falso).
- Operadores lógicos: `! && ||` (diferentes de `& |`, que são bit a bit e não serão usados agora).
- **Conversão de tipos**: implícita (o compilador converte sozinho, podendo haver perda) e explícita/**cast** (você força a conversão, ex.: `(int) 9.9`).
- Divisão inteira: `int / int` resulta em `int` (a parte decimal é descartada, sem arredondar).
- Precedência de operadores (multiplicação/divisão antes de soma/subtração, por exemplo).

## Exercícios

### Exercício 1 — Aritmética básica
Escreva um programa que declare `int a = 17;` e `int b = 5;`, e imprima os resultados de `a + b`, `a - b`, `a * b`, `a / b` e `a % b`. Antes de rodar, tente calcular manualmente `a / b` e `a % b` e confira se bate.

### Exercício 2 — Divisão inteira x divisão real
Declare `int x = 5;` e `int y = 2;`. Imprima `x / y`. Depois, usando **cast**, imprima `(float) x / y` (força o resultado a ser decimal). Compare os dois resultados e explique em um comentário a diferença.

### Exercício 3 — Pré-incremento x pós-incremento (o clássico "pega o iniciante")
Trace manualmente no papel o resultado das linhas abaixo **antes** de rodar o código, depois confira digitando e executando:
```c
int x = 5;
int y = x++;   // qual o valor de y? e de x depois?
int z = ++x;   // qual o valor de z agora? e de x?
```
Imprima `x`, `y` e `z` e confira se sua previsão estava certa.

### Exercício 4 — Operadores relacionais e lógicos
Declare `int idade = 20;` e `int tem_carteira = 1;` (1 = sim, 0 = não). Sem usar `if` (ainda vamos ver isso na próxima aula), apenas calcule e imprima o resultado da expressão lógica:
```c
(idade >= 18) && (tem_carteira == 1)
```
O resultado impresso deve ser `1` (verdadeiro) ou `0` (falso). Teste também trocando os valores de `idade` e `tem_carteira` para obter `0`.

### Exercício 5 — Cast explícito e perda de dados
Declare `float nota = 9.87f;` e converta para `int` usando cast: `int nota_int = (int) nota;`. Imprima os dois valores. Depois, declare `int grande = 100000;` e converta para `short` (`short pequeno = (short) grande;`) — imprima o resultado e, em um comentário, explique por que o valor mudou (relacione com a faixa de valores do `short` vista na Aula03_04).

### Exercício 6 — Atualizando um saldo (operadores compostos)
Simule uma conta bancária simples: declare `float saldo = 100.0f;`. Em sequência, aplique:
1. Um depósito de `50.0` usando `+=`.
2. Um saque de `30.0` usando `-=`.
3. Um rendimento de `2%` sobre o saldo atual usando `*=` (multiplique por `1.02`).

Imprima o saldo após cada operação (3 `printf`s).

## Desafio extra (opcional)

Sem rodar no computador, calcule manualmente, passo a passo (mostrando a precedência aplicada), o valor de:
```c
int resultado = 10 + 2 * 3 - 4 / 2 % 3;
```
Depois confira digitando o código. Se errar, releia a tabela de precedência da aula e refaça o cálculo até entender onde errou.

## Perguntas para se testar

1. Qual a diferença entre `x++` e `++x`?
2. Por que `5 / 2` em C dá `2` e não `2.5`?
3. O que é conversão implícita e o que é cast (conversão explícita)? Dê um exemplo de cada.
4. Qual a diferença entre `=` e `==`?

## Erros comuns nesta etapa

- Confundir `=` (atribuição) com `==` (comparação) — é um dos erros mais comuns entre iniciantes.
- Esperar que `int / int` dê resultado decimal sem usar cast.
- Misturar `&&`/`||` (lógicos) com `&`/`|` (bit a bit) sem perceber a diferença.
