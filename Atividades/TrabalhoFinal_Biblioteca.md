# Trabalho Final — Sistema Integrado (T)

**Abrangência:** Unidades I a IV (todo o conteúdo do semestre)  
**Modalidade:** **dupla** (conforme plano de ensino)  
**Valor:** 10,0 pontos (componente T nas médias A1 e A2)  
**Entrega sugerida:** junto à Avaliação A2 (P2) — ver datas do plano  

---

## Tema

### “Gestão de Empréstimos da Biblioteca do Curso”

Um sistema em C, executado no console, para gerenciar livros e empréstimos de alunos **apenas em memória** (vetores/structs; sem banco de dados e sem arquivos, a menos que o professor autorize bônus).

---

## Por que este tema?

Cobre de forma natural:

| Conteúdo do plano | Onde aparece no sistema |
|-------------------|-------------------------|
| Tipos, variáveis, constantes | códigos, limites, contadores |
| Entrada/saída | menus, formulários no terminal |
| if / switch / laços | menu, validações, listagens |
| Vetores e matrizes | listas de livros/alunos |
| Strings | títulos, nomes, busca |
| struct / enum | modelos de dados e status |

---

## Modelagem mínima obrigatória

```c
enum StatusLivro { DISPONIVEL, EMPRESTADO };
enum StatusAlunoCurso { ATIVO, INATIVO };

struct Livro {
    int codigo;
    char titulo[61];
    char autor[41];
    enum StatusLivro status;
};

struct Aluno {
    int matricula;
    char nome[41];
    enum StatusAlunoCurso situacao;
};

struct Emprestimo {
    int codigo_livro;
    int matricula_aluno;
    int ativo; /* 1 = em aberto, 0 = devolvido */
};
```

Limites sugeridos (ajuste se necessário, documentando):

- `#define MAX_LIVROS 50`
- `#define MAX_ALUNOS 50`
- `#define MAX_EMPRESTIMOS 100`

---

## Funcionalidades obrigatórias (MVP)

### Livros
1. Cadastrar livro (código único).
2. Listar livros.
3. Buscar livro por código **ou** por trecho do título (`strstr`).

### Alunos
4. Cadastrar aluno (matrícula única; situação via `enum`).
5. Listar alunos.

### Empréstimos
6. Emprestar livro:
   - livro deve existir e estar `DISPONIVEL`;
   - aluno deve existir e estar `ATIVO`;
   - registrar empréstimo e marcar livro como `EMPRESTADO`.
7. Devolver livro:
   - localizar empréstimo ativo;
   - marcar empréstimo como devolvido;
   - livro volta para `DISPONIVEL`.
8. Listar empréstimos em aberto (livro + aluno).

### Relatórios
9. Quantidade de livros disponíveis x emprestados.
10. Menu principal com `do-while` + `switch` (ou equivalente bem justificado).

---

## Funcionalidades bônus (até +1,0 na nota do T, a critério do professor)

- Impedir matrícula/código duplicados com mensagem clara.
- Contar quantos empréstimos cada aluno já fez.
- Ordenar listagem de livros por título (bubble sort simples).
- “Semente” inicial com 3 livros e 2 alunos já cadastrados.

---

## Entregáveis

1. Código-fonte: preferencialmente um único `biblioteca.c` **ou** poucos `.c/.h` se a dupla organizar bem.
2. `README.md` da dupla (1–2 páginas) contendo:
   - nomes e matrículas;
   - como compilar e executar;
   - divisão de tarefas da dupla;
   - decisões de modelagem (2–3 parágrafos);
   - limitações conhecidas.
3. Roteiro de teste (passos + resultados esperados) cobrindo: cadastro, empréstimo, tentativa inválida, devolução e relatório.
4. (Opcional) diagrama simples das structs / fluxo do empréstimo.

---

## Regras de trabalho em dupla

- Ambos devem saber explicar qualquer parte do código na apresentação/defesa rápida (5–8 min).
- Plágio (código idêntico de outra dupla/internet sem adaptação e compreensão) zera o trabalho.
- Comentários em português; identificadores em inglês ou português consistente (prefira inglês para nomes de variáveis/funções, se seguir o padrão da disciplina).

---

## Critérios de avaliação (10,0)

| Critério | Pontos |
|----------|--------|
| Compila e executa o MVP completo | 2,5 |
| Uso correto de struct/enum/vetores | 2,0 |
| Validações e regras de empréstimo/devolução | 2,0 |
| Organização do código e menu | 1,5 |
| Documentação + roteiro de testes | 1,0 |
| Clareza na defesa / domínio do código | 1,0 |

---

## Cronograma sugerido (4 semanas)

1. **Semana 1:** modelagem + cadastro/listagem de livros e alunos.  
2. **Semana 2:** buscas + empréstimo.  
3. **Semana 3:** devolução + relatórios + validações.  
4. **Semana 4:** testes, README, ensaio da defesa.

Use a Atividade 04 como base de “cadastro + busca”.

---

## Compilação

```bash
gcc biblioteca.c -std=c99 -Wall -Wextra -lm -o biblioteca
./biblioteca
```

No Windows (PowerShell), o executável pode ser `biblioteca.exe`.

---

## Alternativa de tema (se a turma preferir contexto de engenharia)

**“Controle de Estoque de Componentes do Laboratório Maker”**  
(mesma estrutura: item, responsável, movimentação entrada/saída, status `DISPONIVEL`/`RESERVADO`).  
Mantém os mesmos critérios; só muda o vocabulário do domínio.
