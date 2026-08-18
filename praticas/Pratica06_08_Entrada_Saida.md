# Prática 06/07/08 — Entrada e Saída Formatada

**Aula de referência:** `Aula06_08.pdf`
**Pré-requisitos:** operadores e tipos de dados (Práticas 03/04 e 05).
**Esta é a primeira prática em que seu programa realmente conversa com o usuário** através do teclado.

## Conceitos que você precisa dominar antes de começar

- `printf` com especificadores: `%d`/`%i` (inteiro), `%f` (float/double), `%c` (caractere), `%s` (string), `%.2f` (2 casas decimais), `%5d` (largura mínima de 5).
- `scanf` com especificadores equivalentes, sempre usando `&` antes do nome da variável (**exceto** para strings/vetores de `char`, que já são endereços).
- `fgets(variavel, sizeof(variavel), stdin)` para ler uma linha de texto (inclusive com espaços) com segurança.
- **`gets()` é proibida** — nunca utilize.
- O **buffer de teclado**: depois de um `scanf("%d", &n)`, sobra o `\n` (Enter) no buffer, o que pode atrapalhar uma leitura de string logo depois. Solução: limpar o buffer com `while (getchar() != '\n');` antes de usar `fgets`, ou usar só `fgets` desde o início.

## Exercícios

### Exercício 1 — Lendo um número inteiro
Escreva um programa que peça a idade do usuário (`scanf("%d", &idade);`) e imprima uma frase completa usando o valor lido, por exemplo:
```
Digite sua idade: 20
Voce tem 20 anos.
```

### Exercício 2 — Lendo um número decimal
Peça o preço de um produto (`float`) e a quantidade comprada (`int`), calcule o total e imprima com **2 casas decimais** usando `%.2f`. Exemplo:
```
Preco unitario: 3.5
Quantidade: 4
Total: 14.00
```

### Exercício 3 — Lendo texto com espaços (nome completo)
Use `fgets` para ler o nome completo do usuário (pode conter espaços) e depois `printf` para cumprimentá-lo. Cuidado: `fgets` inclui o `\n` no final da string lida — não se preocupe em removê-lo ainda, apenas observe esse detalhe na saída.

Exemplo:
```
Digite seu nome completo: Ana Paula Souza
Ola, Ana Paula Souza!
```

### Exercício 4 — Combinando `scanf` e `fgets` (o problema do buffer)
Escreva um programa que:
1. Leia a idade do usuário com `scanf("%d", &idade);`.
2. Em seguida, tente ler o nome completo com `fgets`.

Rode assim, sem nenhum tratamento, e observe o problema (o `fgets` provavelmente vai "ler" uma linha vazia, por causa do `\n` deixado no buffer pelo `scanf`). Depois, corrija o programa adicionando `while (getchar() != '\n');` logo após o `scanf`, e confirme que o problema foi resolvido.

### Exercício 5 — Formatação de tabela
Peça três notas (`float`) de um aluno com `scanf` e imprima-as alinhadas em coluna, usando largura mínima, por exemplo `%6.2f` para cada uma. Exemplo de saída:
```
Nota 1: 7.5
Nota 2:  10.00
Nota 3:   8.30
```
(Não se preocupe em calcular a média ainda — isso envolveria `if` que veremos na próxima aula. Foque apenas na formatação.)

### Exercício 6 — Caractere único
Peça ao usuário para digitar uma única letra (`scanf(" %c", &letra);` — repare no espaço antes do `%c`, que ajuda a ignorar o `\n` residual) e imprima o código ASCII dela usando `%d` (dica: um `char` pode ser impresso como número se você usar `%d` no `printf`, ex.: `printf("%d", letra);`).

## Desafio extra (opcional)

Escreva um programa que leia o nome completo do usuário (com `fgets`) e a idade (com `scanf`), na ordem que você achar mais segura para evitar o problema do buffer, e imprima um "cartão de identificação" formatado, por exemplo:
```
====================
Nome: Joao da Silva
Idade: 22 anos
====================
```

## Perguntas para se testar

1. Por que `gets()` nunca deve ser usada?
2. O que fica "sobrando" no buffer de teclado depois de um `scanf("%d", &n)`, e por que isso é um problema?
3. Por que usamos `&` antes da variável no `scanf` para `int`/`float`/`char`, mas não para strings lidas com `fgets`?
4. Qual especificador de `printf` você usaria para imprimir um número decimal com exatamente 3 casas decimais?

## Erros comuns nesta etapa

- Esquecer o `&` no `scanf` para tipos numéricos (`scanf("%d", idade)` em vez de `scanf("%d", &idade)`), o que gera comportamento incorreto ou até erro em tempo de execução.
- Usar `gets()` "porque é mais simples" — **não faça isso, nunca**.
- Ler um número com `scanf` e, na sequência, uma string com `fgets`, sem limpar o buffer.
- Esquecer que `%s` no `scanf` para uma string **para no primeiro espaço** (por isso usamos `fgets` quando o texto pode ter espaços).
