# Atividade 02 — Entrada e Saída pelo Console

**Unidade:** II  
**Aulas de apoio:** Aula06_08  
**Modalidade:** individual  
**Valor sugerido:** 2,5 pontos (componente do trabalho T)  
**Prazo sugerido:** 1 semana após o fechamento da Unidade II  

---

## Objetivos

- Usar `printf`/`scanf` com especificação de formato correta.
- Ler string com espaços de forma segura (`fgets`).
- Identificar e evitar problemas clássicos de buffer em C.

---

## Contexto (problema)

Monte um **recibo de compra** no terminal.

O programa deve ler:

1. Nome completo do cliente (com espaços).
2. Código do produto (inteiro).
3. Nome do produto (pode ter espaços).
4. Quantidade (inteiro > 0).
5. Preço unitário (float).
6. Um caractere de categoria (`A`, `B` ou `C`) — leia com cuidado após números/strings.

Em seguida, imprima um recibo formatado, por exemplo:

```text
========================================
           RECIBO DE COMPRA
========================================
Cliente   : Maria Silva Souza
Produto   : Caderno Universitário
Codigo    : 1042
Categoria : A
Qtd       : 3
Unitario  : R$ 15.90
Total     : R$ 47.70
========================================
```

---

## Entregáveis

1. Arquivo `recibo_compra.c`.
2. Um arquivo `testes.txt` (ou captura) com **pelo menos 2 cenários** de entrada/saída.
3. Resposta curta (5–8 linhas) no topo do `.c` (comentário em bloco):  
   *“Qual problema o `scanf("%s")` causa com nomes compostos e como o seu programa evita isso?”*

---

## Requisitos técnicos

- Usar `fgets` para pelo menos o nome do cliente.
- Calcular `total = quantidade * preco_unitario`.
- Alinhar a saída (pode usar largura em `printf`, ex.: `%-10s`).
- Tratar o `\n` que o `fgets` deixa na string (trocar por `\0` ou similar).
- Compilar com `-std=c99 -Wall`.

---

## Critérios de avaliação (rubrica)

| Critério | Pontos |
|----------|--------|
| Leitura correta (inclui string com espaço) | 0,7 |
| Formatação da saída (recibo legível) | 0,5 |
| Cálculo do total | 0,4 |
| Explicação sobre buffer/`scanf` vs `fgets` | 0,4 |
| Testes demonstrados | 0,5 |

---

## Erros comuns (evite)

- Misturar `scanf` e `fgets` sem limpar o buffer.
- Esquecer `&` em `scanf` de `int`/`float`.
- Usar `gets` (função insegura — **não usar**).

---

## Dica de estudo

Slides finais da Aula06_08 (problemas de leitura e `while (getchar() != '\n');`).  
Prática relacionada: `Pratica04` e `Pratica05`.
