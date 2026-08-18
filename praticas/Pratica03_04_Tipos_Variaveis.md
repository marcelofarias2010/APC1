# Prática 03/04 — Tipos, Variáveis e Constantes

**Aula de referência:** `Aula03_04_Tipos_Variaveis.pdf`
**Pré-requisitos:** saber criar, compilar e executar um programa C básico (Prática 02).
**Atenção:** nesta prática você ainda **não deve usar conversão de tipos (cast)** — esse assunto só será estudado na próxima aula (Aula05). Se uma operação der um resultado "estranho" (por exemplo, perda de casas decimais), apenas observe e anote — vamos entender o porquê na próxima prática.

## Conceitos que você precisa dominar antes de começar

- Tipos primitivos: `char`, `int`, `float`, `double`.
- Declaração de variáveis: `tipo nome;` e `tipo nome = valor;`.
- Regras de nomenclatura de variáveis (não pode começar com número, não pode ter espaço, é case-sensitive).
- Literais: `'a'` (caractere, aspas simples) é diferente de `"a"` (string, aspas duplas).
- Escopo **local** (variável só existe dentro do bloco onde foi declarada) x **global** (declarada fora de qualquer função, existe durante todo o programa).
- Constantes: `#define NOME valor` (sem `;` no final) e `const tipo nome = valor;`.

## Exercícios

### Exercício 1 — Declarando variáveis
Crie um programa que declare (sem usar `scanf` ainda — apenas atribua valores diretamente no código) as seguintes variáveis e depois as imprima com `printf`:

- Sua idade (inteiro).
- Sua altura em metros (ponto flutuante, ex.: `1.75`).
- A inicial do seu primeiro nome (caractere).
- Se você está aprovado ou não na disciplina, usando um inteiro `0` (não) ou `1` (sim).

Exemplo de saída esperada:
```
Idade: 19
Altura: 1.75
Inicial: M
Aprovado (0/1): 1
```
Dica: para imprimir um `int`, use `%d`; para `float`, use `%f`; para `char`, use `%c` dentro do `printf` (esses especificadores serão formalizados na próxima aula, mas você já pode usá-los).

### Exercício 2 — `char` vs string
Crie duas variáveis: uma `char letra = 'A';` e explique em um comentário por que **não seria possível** escrever `char letra = "A";`. (Não rode isso — é para você entender o erro antes de cometê-lo.)

### Exercício 3 — Escopo local vs global
Escreva um programa com uma variável **global** chamada `contador` (declarada fora do `main`) inicializada em `10`. Dentro do `main`, declare uma variável **local** com o mesmo nome `contador`, mas com valor `5`. Imprima o valor de `contador` dentro do `main`. Depois, em um comentário, explique qual valor apareceu e por quê (dica: a variável local "esconde" a global dentro do bloco onde foi declarada).

### Exercício 4 — Constantes
Escreva um programa que:
1. Defina uma constante `PI` com valor `3.14159` usando `#define`.
2. Defina uma constante `GRAVIDADE` com valor `9.8` usando `const double`.
3. Declare uma variável `raio` do tipo `float` com valor `2.0`.
4. Calcule e imprima a área de um círculo (`PI * raio * raio`).

Em um comentário, explique com suas palavras a diferença entre usar `#define` e `const` para criar uma constante.

### Exercício 5 — Faixas de valores
Sem rodar nenhum código, consulte a tabela de tipos vista na aula e responda em um comentário:

a) Um `int` normalmente ocupa quantos bytes e qual sua faixa aproximada de valores?
b) Um `char` ocupa quantos bytes?
c) Por que usar `unsigned int` em vez de `int` quando você sabe que o número nunca será negativo?

## Desafio extra (opcional)

Declare uma variável `int idade = -5;` (uma idade inválida). Sem usar `if` (ainda não vimos isso), apenas declare também uma constante `IDADE_MINIMA` com `#define` e imprima os dois valores lado a lado. Isso prepara terreno para a Aula09_10, onde você vai aprender a *comparar* esses valores de verdade.

## Perguntas para se testar

1. Qual a diferença entre `'a'` e `"a"` em C?
2. O que acontece se você declarar duas variáveis com o mesmo nome em escopos diferentes (uma global, uma local)?
3. Por que usar `const` ou `#define` em vez de simplesmente usar o número diretamente no código (ex.: `3.14159` espalhado em vários lugares)?

## Erros comuns nesta etapa

- Colocar `;` no final de uma linha de `#define` (isso é um erro, pois `#define` não é um comando C comum, é uma diretiva de pré-processador).
- Tentar guardar texto (`"abc"`) em uma variável `char` (que guarda apenas 1 caractere).
- Esquecer que nomes de variáveis não podem começar com dígito (`1nome` é inválido).
