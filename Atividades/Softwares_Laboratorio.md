# Softwares para laboratório (sem instalação com admin)

Opções práticas para labs do IESB em que o aluno **não tem permissão de administrador**.

## Recomendadas (prioridade)

| Ferramenta | Tipo | Observação |
|------------|------|------------|
| [WinLibs](https://winlibs.com/) (GCC/MinGW-w64 em ZIP) | Portátil | Extrair no pendrive/`D:` e adicionar `bin` ao PATH da sessão |
| [TDM-GCC portable](https://jmeubank.github.io/tdm-gcc/) / pacotes MinGW em ZIP | Portátil | Alternativa ao WinLibs |
| [TCC](http://bellard.org/tcc/) (Tiny C Compiler) | Portátil | Um executável; ótimo para checagem rápida (`tcc arquivo.c -run`) |
| [VS Code Portable](https://code.visualstudio.com/docs/editor/portable) ou [VSCodium Portable](https://portableapps.com/) | Portátil | Editor; ainda precisa do GCC no PATH |
| [PortableGit](https://git-scm.com/download/win) | Portátil | Versão “64-bit Git for Windows Portable” |
| [Notepad++ Portable](https://portableapps.com/apps/development/notepadpp_portable) | Portátil | Edição rápida sem IDE |

## Sem instalar nada (navegador)

| Ferramenta | Uso |
|------------|-----|
| [OnlineGDB](https://www.onlinegdb.com/online_c_compiler) | Compilar/rodar C na hora |
| [Compiler Explorer (Godbolt)](https://godbolt.org/) | Ver compilação / comparar flags |
| [Replit](https://replit.com/) | Projetos rápidos (conta pode ser necessária) |
| [draw.io](https://app.diagrams.net/) | Fluxogramas da Atividade 01 |

## Fluxo sugerido no lab

1. Pendrive com: `mingw64/` (WinLibs) + VS Code Portable + pasta do aluno.  
2. No PowerShell da sessão:

```powershell
$env:Path = "D:\mingw64\bin;" + $env:Path
gcc --version
```

3. Se o lab bloquear executáveis de pendrive: usar **OnlineGDB** na aula e pedir entrega do `.c` pelo GitHub/AVA.

## Evitar (em geral precisam de admin ou são pesados)

- Visual Studio completo (instalador MSI).  
- Instaladores `.exe` clássicos do MinGW sem versão portable.  
- Dependências que exigem escrita em `C:\Program Files`.
