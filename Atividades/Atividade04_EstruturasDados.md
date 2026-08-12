# Atividade 04 — Estruturas de Dados Estáticas

**Unidade:** IV  
**Aulas de apoio:** Aula13_14, Aula15_16  
**Modalidade:** individual ou dupla  
**Valor sugerido:** 2,5 pontos (componente do trabalho T)  
**Prazo sugerido:** antes do Trabalho Final (serve de “ensaio”)  

---

## Objetivos

- Manipular vetores e percorrer com laços.
- Usar strings e funções de `<string.h>` com segurança.
- Modelar dados com `struct` e conjuntos com `enum`.
- Fazer busca linear simples (scanning).

---

## Contexto (problema)

Implemente um **mini cadastro de turmas** em memória (sem arquivo).

### Modelagem obrigatória

```c
enum StatusAluno { REPROVADO = 0, RECUPERACAO = 1, APROVADO = 2 };

struct Aluno {
    int matricula;
    char nome[41];
    float a1;
    float a2;
    enum StatusAluno status;
};
```

Capacidade fixa: até **30 alunos** (`#define MAX 30`).

### Funcionalidades (menu)

1. **Cadastrar aluno** (se houver vaga): ler matrícula, nome (`fgets`), A1 e A2.  
   Calcular média `0.4*A1 + 0.6*A2` (mesma lógica do plano) e definir `status`:
   - média ≥ 5 → `APROVADO`
   - 3 ≤ média < 5 → `RECUPERACAO`
   - média < 3 → `REPROVADO`
2. **Listar alunos** no formato:  
   `matricula | Nome | A1 | A2 | Media | Status`
3. **Buscar por matrícula** e exibir os dados (ou “nao encontrado”).
4. **Buscar por trecho do nome** (`strstr`) e listar correspondências.
5. **Estatísticas**: quantidade por status + média geral da turma.
0. Sair.

---

## Entregáveis

1. Arquivo `cadastro_turma.c`.
2. Tabela de testes (mínimo 3 alunos cadastrados) mostrando listagem e uma busca.

---

## Requisitos técnicos

- Vetor de `struct Aluno`.
- Usar `enum` para status (não apenas strings soltas no cálculo).
- Função auxiliar opcional, mas **não obrigatória** (se a turma ainda não formalizou funções além de `main`, mantenha tudo organizado em `main` + blocos claros).  
  *Alternativa melhor:* se já praticaram funções simples, extrair `calcular_status` e `imprimir_aluno`.
- Não usar alocação dinâmica.
- Compilar com `-std=c99 -Wall`.

---

## Critérios de avaliação (rubrica)

| Critério | Pontos |
|----------|--------|
| Modelagem `struct` + `enum` correta | 0,6 |
| Cadastro e listagem | 0,5 |
| Buscas (matrícula e nome) | 0,6 |
| Estatísticas corretas | 0,4 |
| Organização / tratamento de limites (MAX) | 0,4 |

---

## Observação pedagógica

Esta atividade antecipa o Trabalho Final: quem fizer bem o cadastro terá “esqueleto” pronto para evoluir.

---

## Dica de estudo

Aulas 13–16; práticas `Pratica08`, `Pratica09` e `Pratica10`.
