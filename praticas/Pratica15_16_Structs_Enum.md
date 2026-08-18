# Prática 15/16 — Estruturas (struct) e Enumerações (enum)

**Aula de referência:** `Aula15_16.pdf`
**Pré-requisitos:** vetores/matrizes (Prática 13) e strings (Prática 14) — você vai combinar tudo isso agora.
**Esta é a última prática do material** e serve como preparação direta para o Trabalho Final da disciplina.

## Conceitos que você precisa dominar antes de começar

- `struct` agrupa vários campos, possivelmente de tipos diferentes, sob um único nome.
```c
struct contato_t {
    char nome[31];
    int telefone;
};
```
- Acesso aos campos com o operador `.` (ex.: `contato.telefone`).
- **Atribuição direta**: `contato2 = contato1;` copia todos os campos de uma vez.
- **Structs aninhadas**: uma struct pode conter outra struct como campo (acesso em cadeia, ex.: `pessoa.endereco.numero`).
- **Vetor/matriz de structs**: é possível declarar `struct contato_t agenda[10];` para guardar vários contatos.
- `enum` cria um conjunto de constantes nomeadas, inteiras, começando em `0` por padrão (ou em valores customizados).
- `enum` é muito útil para substituir "números mágicos" por nomes com significado (ex.: `SEG` em vez de `1`).

## Exercícios

### Exercício 1 — Sua primeira struct
Declare uma struct `struct aluno_t` com os campos `nome` (string de até 50 caracteres), `matricula` (int) e `media` (float). Declare uma variável desse tipo, preencha os campos (pode ser com valores diretos no código ou lidos do usuário) e imprima todos eles formatados.

### Exercício 2 — Copiando structs
Declare duas variáveis do tipo `struct aluno_t` (`aluno1` e `aluno2`). Preencha `aluno1` com dados lidos do usuário. Copie `aluno1` para `aluno2` com uma simples atribuição (`aluno2 = aluno1;`). Imprima os dois e confirme que os dados são idênticos.

### Exercício 3 — Vetor de structs
Declare `struct aluno_t turma[5];`. Usando um `for`, peça ao usuário para cadastrar 5 alunos (nome, matrícula e média de cada um). Depois, com outro `for`, imprima a lista completa da turma.

### Exercício 4 — Buscando na turma
Reaproveitando o vetor de structs do Exercício 3, peça ao usuário uma matrícula para buscar. Percorra o vetor com um `for` e, ao encontrar o aluno com aquela matrícula, imprima seus dados completos. Se não encontrar nenhum, informe "Aluno não encontrado".

### Exercício 5 — Struct aninhada
Crie uma `struct endereco_t` com os campos `rua` (string), `numero` (int) e `cidade` (string). Depois, crie uma `struct pessoa_t` que tenha `nome` (string) e um campo do tipo `struct endereco_t`. Preencha e imprima os dados de uma pessoa, acessando os campos do endereço em cadeia (ex.: `pessoa.endereco.rua`).

### Exercício 6 — Enum simples
Declare um `enum dia_semana_t { DOM, SEG, TER, QUA, QUI, SEX, SAB };`. Peça ao usuário um número de 0 a 6, valide se está na faixa correta, e use esse valor para indexar um vetor de strings com os nomes dos dias (ex.: `char nomes_dias[7][10] = {"Domingo", "Segunda", ...};`), imprimindo o nome do dia correspondente.

### Exercício 7 — Cadastro de produtos (desafio da aula)
Crie:
```c
struct produto_t {
    int codigo;
    char nome[30];
    float preco;
};

enum disponibilidade_t { INDISPONIVEL, DISPONIVEL };
```
Cadastre um vetor com 3 produtos (código, nome, preço, e disponibilidade — usando o `enum`). Ao final, liste todos os produtos, mostrando "Disponível" ou "Indisponível" por extenso (não o número do enum) conforme o valor armazenado.

## Desafio extra (opcional) — Mini sistema de agenda

Combine tudo o que você aprendeu no curso até aqui para construir uma pequena agenda de contatos:

- Uma `struct contato_t` com `nome`, `telefone` e um `enum categoria_t { PESSOAL, TRABALHO, FAMILIA }`.
- Um vetor de até 5 contatos.
- Um menu (`switch`, revise a Prática 09/10) com opções: cadastrar contato, listar todos os contatos, buscar contato por nome (usando `strcmp`, revise a Prática 14), e sair.
- Use um laço (`do-while`, revise a Prática 11/12) para manter o menu aparecendo até o usuário escolher sair.

Este exercício é intencionalmente parecido com o formato esperado do Trabalho Final — é uma ótima forma de se preparar.

## Perguntas para se testar

1. Qual a diferença entre acessar um campo de struct comum (`.`) e o que mudaria se fosse um ponteiro para struct (`->`)? (Não vimos ponteiros no curso — apenas reflita sobre a existência dessa diferença, caso você a encontre pesquisando por conta própria.)
2. O que acontece quando você faz `struct2 = struct1;`? Todos os campos são copiados, ou apenas a "referência"?
3. Por que usar `enum` é preferível a espalhar números soltos (`0`, `1`, `2`) pelo código?
4. Como você acessaria o campo `numero` de um `endereco` que está dentro de uma `pessoa`?

## Erros comuns nesta etapa

- Esquecer o `;` depois do `}` que fecha a declaração de uma `struct` (diferente de blocos de `if`/`for`, a declaração de struct exige `;` no final).
- Tentar comparar duas structs inteiras com `==` (isso não é permitido em C — é preciso comparar campo a campo).
- Confundir os valores numéricos do `enum` com os nomes: lembre-se que, para o computador, `enum` é apenas um `int` com nome — imprimir a variável do enum diretamente com `%d` mostra o número, não o texto.
- Esquecer de inicializar todos os campos de uma struct antes de usá-la, deixando "lixo de memória" em algum campo.
