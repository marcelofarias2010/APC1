# Prática 09/10 — Comandos de Seleção (if, else, switch)

**Aula de referência:** `Aula09_10.pdf`
**Pré-requisitos:** entrada e saída formatada (Prática 06/07/08), operadores relacionais e lógicos (Prática 05).
**Esta é a primeira prática em que seu programa toma decisões** — ou seja, executa caminhos diferentes dependendo dos dados.

## Conceitos que você precisa dominar antes de começar

- `if` simples e `if/else`.
- `if/else if/else` (cadeia de condições).
- `if` aninhado (um `if` dentro de outro).
- Operador ternário: `condicao ? valor_se_verdadeiro : valor_se_falso`.
- `switch/case/break/default` — funciona apenas com `int` ou `char` (não com `float` nem com condições complexas).
- **Fall-through**: se você esquecer o `break` dentro de um `case`, a execução "cai" para o próximo `case` automaticamente.

## Exercícios

### Exercício 1 — Par ou ímpar
Leia um número inteiro e informe se é par ou ímpar, usando `if/else` e o operador `%`.

### Exercício 2 — Maior de três números
Leia três números inteiros e informe qual é o maior deles, usando `if/else if/else` (ou `if` aninhado, à sua escolha).

### Exercício 3 — Classificação de IMC
Leia o peso (kg) e a altura (m) de uma pessoa, calcule o IMC (`peso / (altura * altura)`) e classifique de acordo com a tabela:

| IMC | Classificação |
|---|---|
| menor que 18.5 | Abaixo do peso |
| 18.5 a 24.9 | Peso normal |
| 25.0 a 29.9 | Sobrepeso |
| 30.0 ou mais | Obesidade |

Use `if/else if/else`. Em um comentário, explique por que **não seria adequado** usar `switch` para este exercício.

### Exercício 4 — Operador ternário
Reescreva o Exercício 1 (par ou ímpar) usando o operador ternário para decidir a mensagem a imprimir, em vez de `if/else`.

### Exercício 5 — Menu com `switch`
Peça ao usuário para digitar um número de 1 a 4 representando uma opção de menu:
```
1 - Somar dois numeros
2 - Subtrair dois numeros
3 - Multiplicar dois numeros
4 - Dividir dois numeros
```
Peça dois números, use `switch` para decidir qual operação realizar, e imprima o resultado. Trate o caso de uma opção inválida com `default`. **Não esqueça o `break` em cada `case`.**

### Exercício 6 — Explorando o fall-through de propósito
Copie o programa do Exercício 5, mas **remova todos os `break`**. Digite a opção `1` e observe o que acontece na saída (o programa vai executar todos os `case` seguintes também). Em um comentário, explique o que é *fall-through* e por que isso aconteceu.

### Exercício 7 — Ano bissexto (if aninhado)
Leia um ano e informe se é bissexto. Regra: um ano é bissexto se for divisível por 4 **e** (não for divisível por 100 **ou** for divisível por 400). Você pode resolver com `if` aninhado ou combinando `&&`/`||` em uma única condição — tente das duas formas e compare qual fica mais legível.

## Desafio extra (opcional)

Construa uma calculadora de desconto: leia o valor de uma compra e a quantidade de itens. Se a quantidade for maior que 10, aplique 15% de desconto; se estiver entre 5 e 10 (inclusive), aplique 10%; caso contrário, sem desconto. Imprima o valor final. Pense com cuidado na ordem das comparações no `if/else if` para não haver sobreposição de faixas.

## Perguntas para se testar

1. Em que situação `switch` **não pode** ser usado no lugar de `if/else if`?
2. O que acontece se você esquecer o `break` dentro de um `case`?
3. Quando faz sentido usar o operador ternário em vez de um `if/else` completo?
4. Qual a diferença entre `if` aninhado e uma condição única com `&&`?

## Erros comuns nesta etapa

- Esquecer o `break` em cada `case` do `switch` sem perceber (causando fall-through indesejado).
- Usar `switch` com `float` ou com faixas de valores (`switch` só compara igualdade com `int`/`char`).
- Comparar `float` com `==` (comparação exata de ponto flutuante pode falhar por imprecisão — prefira comparações com `<`, `>`, ou faixas).
- Deixar condições sobrepostas em cadeias de `if/else if` (ex.: testar `> 10` depois de já ter testado `>= 5`, gerando ambiguidade sobre qual bloco realmente executa).
