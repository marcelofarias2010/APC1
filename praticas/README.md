# Práticas de Algoritmos e Programação de Computadores I (APC I)

Esta pasta contém **atividades práticas complementares**, uma para cada aula (ou par de aulas) da pasta `aulas_revisadas/`. Elas foram criadas para você **fixar** o conteúdo visto em sala através da prática — que é a única forma real de aprender a programar.

## Como usar estas práticas

1. **Revise os slides da aula correspondente** antes de começar (ex.: para `Pratica03_04`, revise `Aula03_04_Tipos_Variaveis.pdf`).
2. Leia a seção **"Conceitos que você precisa dominar"** de cada prática — se algo não fizer sentido, volte ao slide.
3. Resolva os exercícios **na ordem proposta**: eles vão do mais simples ao mais difícil.
4. **Não pule para o desafio extra** sem terminar os exercícios normais.
5. Compare a saída do seu programa com o **exemplo de saída** de cada exercício.
6. Ao final, tente responder as **perguntas de autoavaliação** sem consultar o código.

## Como compilar e executar seus programas em C

Em todas as práticas você vai escrever um arquivo `.c` e precisará compilá-lo. Use sempre estas flags (elas ajudam a encontrar erros e seguem o padrão usado nas aulas):

```
gcc -std=c99 -Wall -o programa.exe programa.c
```

E para executar:

- **Windows (cmd/PowerShell):** `.\programa.exe`
- **Linux/macOS:** `./programa`

Se o compilador mostrar *warnings* (avisos), **leia-os** — quase sempre indicam um erro que ainda vai te incomodar mais tarde (variável não usada, comparação suspeita, etc.).

## Regras importantes que valem para TODAS as práticas

Estas regras seguem exatamente o que já foi ensinado até aqui no curso — não use nada além disso, mesmo que já conheça de outros lugares:

- ❌ **Nunca use `gets()`** — é uma função proibida e removida da linguagem (pode causar estouro de buffer). Use sempre `fgets(variavel, sizeof(variavel), stdin)` para ler texto com espaços.
- ❌ **Não crie funções próprias** (com `nome_da_funcao(parametros) { ... }`) — isso ainda não foi ensinado no curso. Todo o código deve ficar dentro de `main()`.
- ❌ **Não use ponteiros, `malloc`/`free` ou arquivos (`fopen`)** — também ainda não vistos.
- ✅ Use `#include <stdio.h>` (entrada/saída) e, a partir da Aula14, também `#include <string.h>` quando for mexer com strings.
- ✅ Sempre teste seu programa com **mais de um exemplo de entrada**, incluindo casos "de borda" (números negativos, zero, string vazia, etc.) quando fizer sentido.

## Índice das práticas

| Arquivo | Aula de referência | Assunto |
|---|---|---|
| [Pratica01_Algoritmos_Fluxogramas.md](Pratica01_Algoritmos_Fluxogramas.md) | Aula01a e Aula01b | Algoritmos, pseudocódigo, fluxogramas, sistemas de numeração |
| [Pratica02_Primeiro_Programa_C.md](Pratica02_Primeiro_Programa_C.md) | Aula02 | Estrutura de um programa C, compilação, `printf` simples |
| [Pratica03_04_Tipos_Variaveis.md](Pratica03_04_Tipos_Variaveis.md) | Aula03_04 | Tipos primitivos, variáveis, constantes, escopo |
| [Pratica05_Operadores.md](Pratica05_Operadores.md) | Aula05 | Operadores aritméticos, relacionais, lógicos, conversão de tipos (cast) |
| [Pratica06_08_Entrada_Saida.md](Pratica06_08_Entrada_Saida.md) | Aula06_08 | `printf`/`scanf` formatados, `fgets`, buffer de entrada |
| [Pratica09_10_Selecao.md](Pratica09_10_Selecao.md) | Aula09_10 | `if`/`else`, `if` aninhado, operador ternário, `switch` |
| [Pratica11_12_Repeticao.md](Pratica11_12_Repeticao.md) | Aula11_12 | `for`, `while`, `do-while`, `break`, `continue` |
| [Pratica13_Vetores_Matrizes.md](Pratica13_Vetores_Matrizes.md) | Aula13 | Vetores (1D) e matrizes (2D) |
| [Pratica14_Strings.md](Pratica14_Strings.md) | Aula14 | Strings, `string.h`, matrizes de strings |
| [Pratica15_16_Structs_Enum.md](Pratica15_16_Structs_Enum.md) | Aula15_16 | `struct`, `enum`, preparação para o trabalho final |

## Dica geral para quem está começando agora

Programar é uma habilidade que se aprende **errando e corrigindo**, não decorando. Se travar em um exercício:

1. Releia o enunciado com calma — o que exatamente é pedido como entrada e como saída?
2. Quebre o problema em pedaços pequenos ("primeiro leio os dados, depois calculo, depois mostro").
3. Use `printf` no meio do código para "espiar" o valor das variáveis enquanto o programa roda (é uma técnica válida de depuração!).
4. Só depois de tentar sozinho por um tempo, procure ajuda do professor/monitor ou revise o slide da aula.
