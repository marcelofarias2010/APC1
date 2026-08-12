# Atividade 03 — Estruturas de Controle

**Unidade:** III  
**Aulas de apoio:** Aula09_10, Aula11_12  
**Modalidade:** individual ou dupla  
**Valor sugerido:** 2,5 pontos (componente do trabalho T)  
**Prazo sugerido:** 1 semana após o fechamento da Unidade III  

---

## Objetivos

- Aplicar `if`/`else` e `switch`/`case` com critério.
- Escolher entre `for`, `while` e `do-while` conforme o problema.
- Usar `break`/`continue` quando fizer sentido (sem abusar).

---

## Contexto (problema)

Crie um **menu de utilidades acadêmicas** que só encerra quando o usuário escolher sair.

```text
===== MENU APC I =====
1 - Classificar media (Aprovado/Recuperacao/Reprovado)
2 - Tabuada de um numero
3 - Soma de N numeros positivos
4 - Converter nota numerica em conceito (switch)
0 - Sair
Opcao:
```

### Regras de cada opção

**1 — Classificar média**  
Ler uma média `m` (0 a 10).  
- `m >= 7`: Aprovado  
- `5 <= m < 7`: Recuperacao  
- `m < 5`: Reprovado  
Validar intervalo; se inválida, pedir de novo (laço).

**2 — Tabuada**  
Ler um inteiro `n` e imprimir a tabuada de 1 a 10 com `for`.

**3 — Soma de N números positivos**  
Ler `N`, depois ler `N` valores.  
Somar apenas os **positivos** (use `continue` para ignorar ≤ 0).  
Exibir a soma e quantos foram ignorados.

**4 — Conceito (switch)**  
Ler uma nota inteira de 0 a 10 e mapear:

| Nota | Conceito |
|------|----------|
| 10 ou 9 | SS |
| 8 ou 7 | MS |
| 6 ou 5 | MM |
| 4 ou 3 | MI |
| 2, 1 ou 0 | II |
| outro | Invalido |

Use `switch` (pode agrupar cases com fall-through **de forma consciente**).

**0 — Sair**  
Encerrar o programa.

Qualquer outra opção: mensagem de erro e voltar ao menu (`do-while` recomendado).

---

## Entregáveis

1. Arquivo `menu_utilidades.c`.
2. Relatório curto (até 10 linhas) em comentário no início do arquivo:  
   - por que usou `do-while` (ou outra estrutura) no menu;  
   - em qual opção usou `switch` e por quê.

---

## Requisitos técnicos

- Menu em laço até opção 0.
- Pelo menos um `switch` e pelo menos dois tipos de laço diferentes no programa todo.
- Código organizado (indentação, nomes claros).
- Compilar com `-std=c99 -Wall`.

---

## Critérios de avaliação (rubrica)

| Critério | Pontos |
|----------|--------|
| Menu funcional e robusto (opções inválidas) | 0,6 |
| Condicionais corretas (opção 1) | 0,4 |
| Laços corretos (opções 2 e 3) | 0,6 |
| `switch` correto (opção 4) | 0,5 |
| Clareza do código + justificativa das estruturas | 0,4 |

---

## Exemplo parcial

```text
Opcao: 4
Nota (0-10): 8
Conceito: MS
```

---

## Dica de estudo

Aulas 09–12 (“Em Resumo” dos slides).  
Práticas: `Pratica06` e `Pratica07`.
