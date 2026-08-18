# Prática 13 — Vetores e Matrizes

**Aula de referência:** `Aula13_Matrizes.pdf`
**Pré-requisitos:** laços de repetição (Prática 11/12) — você vai usá-los intensamente aqui.

## Conceitos que você precisa dominar antes de começar

- **Vetor (array 1D)**: `tipo nome[tamanho];` — coleção de valores do mesmo tipo, em posições contíguas de memória.
- Índices começam em **0** e vão até `tamanho - 1`.
- **C não verifica limites do vetor** — acessar `vetor[10]` em um vetor de tamanho 10 é um erro grave que o compilador não vai necessariamente avisar, mas pode causar comportamento imprevisível.
- Inicialização: `int v[5] = {1, 2, 3, 4, 5};`.
- **Matriz (array 2D)**: `tipo nome[linhas][colunas];`, acessada com dois índices `nome[i][j]`.
- Percorrer uma matriz sempre exige **dois laços aninhados** (um para linha, um para coluna).

## Exercícios

### Exercício 1 — Preenchendo e exibindo um vetor
Declare um vetor de 10 inteiros. Usando um `for`, peça ao usuário para digitar os 10 valores (armazenando cada um em `vetor[i]`). Em seguida, com outro `for`, exiba todos os valores digitados.

### Exercício 2 — Soma e média
Reaproveitando a lógica do Exercício 1, leia 5 notas em um vetor de `float`, calcule a soma e a média, e imprima ambas.

### Exercício 3 — Maior e menor valor
Leia 8 números inteiros em um vetor. Percorra o vetor com um `for` para encontrar o **maior** e o **menor** valor digitado, sem usar nenhuma função pronta — apenas comparações (`if`) dentro do laço.

### Exercício 4 — Contando acima da média (desafio da aula)
Leia 5 notas em um vetor de `float`. Calcule a média das 5 notas. Depois, percorra o vetor novamente e conte quantas notas estão **acima** da média. Mostre a média e a contagem final.

### Exercício 5 — Vetor de caracteres (introdução)
Declare `char vogais[5] = {'a', 'e', 'i', 'o', 'u'};` e use um `for` para imprimir cada vogal em uma linha separada. (Isso prepara terreno para strings, que veremos na próxima aula.)

### Exercício 6 — Criando e preenchendo uma matriz
Declare uma matriz `int m[3][3];`. Usando dois `for` aninhados, preencha a matriz de forma que `m[i][j] = i + j`. Em seguida, com outros dois `for` aninhados, imprima a matriz completa, uma linha por vez.

### Exercício 7 — Soma de todos os elementos de uma matriz
Peça ao usuário para preencher uma matriz `4x4` de inteiros (usando `scanf` dentro de dois `for` aninhados) e calcule a soma de **todos** os elementos da matriz.

### Exercício 8 — Diagonal principal
Usando a matriz do Exercício 6 (ou uma nova `int m[4][4]`), percorra-a e some apenas os elementos da **diagonal principal** (onde o índice da linha é igual ao índice da coluna, ou seja, `m[i][i]`).

## Desafio extra (opcional)

Simule uma "prova" com 4 alunos e 3 notas cada, usando uma matriz `float notas[4][3]`. Preencha a matriz lendo os dados do usuário, depois calcule e imprima a **média de cada aluno** (percorrendo uma linha por vez). Dica: você vai precisar de um laço externo para cada aluno e um laço interno para somar as notas daquele aluno antes de dividir por 3.

## Perguntas para se testar

1. Qual o índice do primeiro elemento de um vetor em C?
2. O que acontece (do ponto de vista do C) se você tentar acessar uma posição fora dos limites de um vetor?
3. Por que percorrer uma matriz 2D sempre exige dois laços?
4. Qual a diferença entre `int v[5] = {1,2,3,4,5};` e declarar o vetor sem inicializar e preenchê-lo depois com um `for`?

## Erros comuns nesta etapa

- Tentar acessar `vetor[tamanho]` (um índice além do último válido, que é `tamanho - 1`) — **erro clássico chamado "off-by-one"**.
- Trocar a ordem dos índices em uma matriz (`m[coluna][linha]` em vez de `m[linha][coluna]`).
- Esquecer de reiniciar o laço interno corretamente ao passar para a próxima linha de uma matriz.
- Somar/usar um vetor antes de garantir que todas as posições foram preenchidas com valores válidos.
