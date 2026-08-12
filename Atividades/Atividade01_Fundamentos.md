# Atividade 01 — Fundamentos da Programação

**Unidade:** I (Algoritmos, visão de C, tipos, variáveis, constantes e operadores)  
**Aulas de apoio:** Aula01, Aula02, Aula03_05  
**Modalidade:** individual  
**Valor sugerido:** 2,5 pontos (componente do trabalho T)  
**Prazo sugerido:** 1 semana após o fechamento da Unidade I  

---

## Objetivos

- Representar um problema em pseudocódigo e/ou fluxograma.
- Declarar variáveis e constantes com tipos adequados.
- Usar operadores aritméticos, relacionais e lógicos corretamente.
- Produzir um programa C simples, compilável e executável.

---

## Contexto (problema)

Você vai ajudar um estudante a organizar o orçamento semanal da cantina.

Dados fixos (use `#define` ou `const`):

- Valor do ticket de refeição: `R$ 12,50`
- Valor do café: `R$ 4,00`

O programa deve:

1. Ler a quantidade de refeições e de cafés da semana (inteiros ≥ 0).
2. Calcular o gasto total.
3. Ler o valor disponível no cartão (float).
4. Calcular o saldo restante (`disponivel - total`).
5. Exibir:
   - gasto com refeições
   - gasto com cafés
   - gasto total
   - saldo restante

---

## Entregáveis

1. **Algoritmo** (escolha uma opção):
   - pseudocódigo **ou**
   - fluxograma (imagem ou PDF)
2. Arquivo `orcamento_cantina.c` com o programa em C.
3. Captura de tela (ou texto) mostrando **duas execuções** com entradas diferentes.

---

## Requisitos técnicos

- Usar apenas tipos primitivos vistos na Unidade I (`int`, `float`/`double`, eventualmente `char` se fizer sentido).
- Usar pelo menos uma constante (`#define` ou `const`).
- Comentários curtos explicando a ideia do cálculo (não comentar linha a linha).
- Compilar sem erros com `-std=c99 -Wall`.

---

## Exemplo de execução

```text
Quantidade de refeicoes: 4
Quantidade de cafes: 3
Valor disponivel no cartao: 70.00

Gasto refeicoes: 50.00
Gasto cafes: 12.00
Gasto total: 62.00
Saldo restante: 8.00
```

---

## Critérios de avaliação (rubrica)

| Critério | Pontos |
|----------|--------|
| Algoritmo claro (entrada → processamento → saída) | 0,6 |
| Tipos e constantes adequados | 0,5 |
| Cálculos corretos | 0,6 |
| Saída organizada e legível | 0,4 |
| Código compilável + evidência de testes | 0,4 |

---

## Desafio opcional (+0,3 bônus, não obrigatório)

Calcular também o **percentual do cartão já utilizado** e avisar se o saldo ficou negativo (ainda sem `if` composto elaborado: pode usar apenas expressão e mensagem fixa, ou um `if` simples se a turma já tiver visto).

---

## Dica de estudo

Revise na apostila/livro: declaração de variáveis, `printf` básico e operadores aritméticos.  
Nas práticas: `Pratica02` e `Pratica03` (printf, sizeof, declaração).
