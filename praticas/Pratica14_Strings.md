# Prática 14 — Strings em C

**Aula de referência:** `Aula14_Strings.pdf`
**Pré-requisitos:** vetores (Prática 13), leitura de texto com `fgets` (Prática 06/07/08).

## Conceitos que você precisa dominar antes de começar

- Uma string em C é um **vetor de `char`** terminado pelo caractere especial `'\0'` (terminador nulo).
- Declaração: `char nome[30];` (reserva espaço) ou `char nome[] = "Ana";` (tamanho calculado automaticamente).
- C **não tem operadores** para manipular strings diretamente (não dá para fazer `str1 + str2`) — é preciso usar as funções da biblioteca `<string.h>`.
- Funções principais de `<string.h>`:
  - `strlen(s)` — retorna o tamanho da string (sem contar o `'\0'`).
  - `strcpy(destino, origem)` — copia uma string para outra.
  - `strcat(destino, origem)` — concatena (junta) uma string ao final de outra.
  - `strcmp(s1, s2)` — compara duas strings (retorna `0` se forem iguais).
  - `strchr(s, c)` — procura um caractere dentro da string.
  - `strstr(s1, s2)` — procura uma substring dentro de outra string.
- **Sempre use `fgets` para ler strings, nunca `gets`.**
- Atenção: `fgets` inclui o `\n` (Enter) no final da string lida — muitas vezes você vai querer removê-lo antes de comparar ou concatenar.
- **Matriz de strings**: uma matriz 2D de `char`, onde cada linha é uma string (ex.: `char nomes[10][50];` guarda até 10 nomes de até 49 caracteres cada).

## Exercícios

### Exercício 1 — Tamanho de uma string
Leia uma frase do usuário com `fgets` e mostre seu tamanho usando `strlen`. Repare que o `\n` lido pelo `fgets` também conta no tamanho — teste e observe isso na saída.

### Exercício 2 — Removendo o `\n` do `fgets`
Depois de ler uma string com `fgets(frase, sizeof(frase), stdin)`, remova o `\n` do final substituindo-o por `'\0'`. Dica: o `\n`, se existir, estará na posição `strlen(frase) - 1`. Você pode fazer isso com o índice do vetor diretamente (ex.: `frase[strlen(frase) - 1] = '\0';`), sem usar nenhuma função nova. Confirme, imprimindo o tamanho antes e depois, que a remoção funcionou.

### Exercício 3 — Copiando e concatenando
Declare `char primeiro[20];` e `char ultimo[20];`, leia ambos com `fgets` (lembre de remover o `\n` de cada um, como no Exercício 2). Declare `char nome_completo[41];`, use `strcpy` para colocar o primeiro nome nele, depois `strcat` para adicionar um espaço `" "` e depois o sobrenome. Imprima o resultado.

### Exercício 4 — Comparando strings
Leia uma palavra do usuário (removendo o `\n`) e compare com a string `"senha123"` usando `strcmp`. Se forem iguais, imprima "Acesso liberado", senão "Acesso negado".

### Exercício 5 — Procurando um caractere
Leia uma palavra do usuário e um caractere. Use `strchr` para verificar se o caractere existe na palavra, informando "Encontrado" ou "Não encontrado".

### Exercício 6 — Buscando uma substring (desafio da aula)
Leia uma frase completa do usuário (com `fgets`) e depois um trecho a ser procurado (também com `fgets`). Remova o `\n` de ambas as strings antes de comparar. Use `strstr` para verificar se o trecho aparece dentro da frase, e informe o resultado.

### Exercício 7 — Matriz de strings (agenda de nomes)
Declare uma matriz de strings capaz de guardar até 5 nomes de até 30 caracteres (`char nomes[5][30];`). Usando um `for`, peça ao usuário para digitar 5 nomes (um por vez, com `fgets`, lembrando de remover o `\n`). Depois, com outro `for`, imprima todos os nomes armazenados.

### Exercício 8 — Contando vogais em uma frase
Leia uma frase do usuário e, percorrendo-a caractere a caractere com um `for` (usando `strlen` para saber até onde ir), conte quantas vogais (a, e, i, o, u — maiúsculas e minúsculas) existem na frase.

## Desafio extra (opcional)

Crie uma pequena "lista de contatos" usando uma matriz de strings de até 5 nomes. Depois de o usuário cadastrar os 5 nomes, peça um nome para buscar e, percorrendo a matriz com um `for` e usando `strcmp` em cada posição, informe se o nome foi encontrado e em qual posição (índice) da matriz ele está.

## Perguntas para se testar

1. Por que toda string em C termina com `'\0'`?
2. Qual a diferença entre `strcpy` e `strcat`?
3. O que `strcmp` retorna quando as duas strings são iguais?
4. Por que precisamos remover manualmente o `\n` deixado pelo `fgets` antes de comparar strings com `strcmp`?

## Erros comuns nesta etapa

- Usar `gets()` — **proibido, sempre use `fgets`**.
- Esquecer que `fgets` inclui o `\n` no final, o que faz comparações com `strcmp` falharem mesmo quando o texto "parece" igual.
- Declarar uma string pequena demais para o conteúdo que será armazenado (ex.: `char nome[5];` para guardar `"Alexandre"`), estourando o espaço reservado.
- Tentar comparar strings com `==` em vez de `strcmp` (em C, `==` compara endereços de memória, não o conteúdo).
