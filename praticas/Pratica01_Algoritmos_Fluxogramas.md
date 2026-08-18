# Prática 01 — Algoritmos, Pseudocódigo e Fluxogramas

**Aulas de referência:** `Aula01a_Algoritmos.pdf` e `Aula01b_Linguagens.pdf`
**Pré-requisitos:** nenhum — esta é a primeira prática do curso.
**Nesta prática você NÃO vai usar o computador para programar** — o objetivo é treinar o *raciocínio* antes de aprender a sintaxe do C. Use papel, caneta, ou um editor de texto simples.

## Conceitos que você precisa dominar antes de começar

- O que é um **algoritmo**: uma sequência finita e ordenada de passos para resolver um problema.
- As três partes de um algoritmo: **entrada** (dados que chegam), **processamento** (o que se faz com eles) e **saída** (resultado apresentado).
- **Pseudocódigo/Portugol**: usa palavras-chave em português como `início`, `fim`, `leia`, `mostrar`, `se/então/senão`, `para`, `enquanto`.
- **Fluxograma**: representação gráfica com símbolos padronizados — óvalo (início/fim), paralelogramo (entrada/saída), retângulo (processamento), losango (decisão).
- Diferença entre **algoritmo** e **programa**: o algoritmo é a ideia/solução; o programa é o algoritmo escrito em uma linguagem que o computador executa.
- Sistemas de numeração: **decimal**, **binário** e **hexadecimal**, e como converter entre eles.

## Exercícios

### Exercício 1 — Identificando as partes de um algoritmo
Para cada situação abaixo, escreva claramente qual é a **entrada**, o **processamento** e a **saída**:

a) Calcular o troco de uma compra no mercado.
b) Descobrir se um número é par ou ímpar.
c) Preparar um miojo (pode ser engraçado, mas force-se a identificar as 3 partes com precisão).

### Exercício 2 — Pseudocódigo simples
Escreva, em Portugol, um algoritmo que:

1. Leia dois números inteiros.
2. Calcule a soma, a diferença e o produto entre eles.
3. Mostre os três resultados na tela.

**Exemplo de estrutura esperada (adapte):**
```
início
   leia(a, b)
   soma <- a + b
   ...
   mostrar(soma, diferenca, produto)
fim
```

### Exercício 3 — Fluxograma
Desenhe (no papel, ou em uma ferramenta como draw.io/diagrams.net) o fluxograma correspondente ao pseudocódigo que você escreveu no Exercício 2. Use corretamente os símbolos: óvalo, paralelogramo e retângulo.

### Exercício 4 — Introduzindo decisão
Escreva em pseudocódigo **e** em fluxograma um algoritmo que:

1. Leia a idade de uma pessoa.
2. Se a idade for menor que 18, mostre "menor de idade".
3. Caso contrário, mostre "maior de idade".

Dica: aqui você vai precisar do losango de decisão no fluxograma e do `se/então/senão` no pseudocódigo.

### Exercício 5 — Conversão de bases numéricas
Sem usar calculadora, converta manualmente:

a) O número decimal `13` para binário.
b) O número binário `1011` para decimal.
c) O número decimal `255` para hexadecimal.
d) O número hexadecimal `1F` para decimal.

Mostre o passo a passo da conversão, não apenas o resultado.

## Desafio extra (opcional)

Escreva o pseudocódigo **e** o fluxograma de um algoritmo que calcula a média de 3 notas de um aluno e informa se ele foi "aprovado" (média ≥ 5) ou "reprovado" (média < 5). Depois, pense: e se você quisesse tratar o caso de uma nota ser digitada como negativa (inválida)? Como o algoritmo mudaria?

## Perguntas para se testar

1. Qual a diferença entre algoritmo e programa?
2. Por que um fluxograma é útil mesmo antes de escrever código?
3. Que símbolo do fluxograma representa uma decisão, e qual estrutura do pseudocódigo corresponde a ele?
4. Por que os computadores trabalham internamente em binário?

## Erros comuns nesta etapa

- Confundir "processamento" com "saída" (ex.: achar que calcular a soma já é a saída, quando a saída é *mostrar* o resultado).
- Esquecer de indicar claramente onde o algoritmo começa e termina (`início`/`fim`).
- Desenhar um losango de decisão sem ter dois caminhos de saída (sim/não) claramente indicados.
