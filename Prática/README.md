# Pasta da Parte Prática - AEDS 2

Bem-vindo ao repositório dos trabalhos práticos realizados na disciplina de Algoritmos e Estruturas de Dados II. Este repositório contém três projetos distintos, cada um abordando tópicos importantes estudados ao longo do curso.

## 📑 Índice de Trabalhos
1. [Trabalho Prático 1 - Saída do Labirinto](#trabalho-prático-1---saída-do-labirinto)
2. [Trabalho Prático 2 - Comparação entre Árvores Balanceadas e Não-Balanceadas](#trabalho-prático-2---comparação-entre-árvores-balanceadas-e-não-balanceadas)
3. [Trabalho Prático 3 - Ordenação de Structs](#trabalho-prático-3---ordenação-de-structs)

---

## Trabalho Prático 1 - Saída do Labirinto
[🔍 Ver pasta do projeto](./Trabalho%20I/)

Este projeto implementa uma solução em C para encontrar o caminho entre o ponto de entrada (`E`) e o ponto de saída (`S`) de um labirinto 10x10. Utiliza conceitos de algoritmos e estruturas de dados.

### Conteúdo da Pasta
- [main.c](./Trabalho%20I/main.c): Código-fonte principal com a lógica de solução
- [descricao.pdf](./Trabalho%20I/descricao.pdf): Documento oficial com a descrição do trabalho
- [Relatorio.pdf](./Trabalho%20I/Relatorio.pdf): Relatório inicial do trabalho (será atualizado)
- [Makefile](./Trabalho%20I/Makefile): Script de automação para compilação

### Como Executar
1. Compile o programa com:
```bash
make
```
2. Execute o programa com:
```bash
make run
```
3. Insira o nome do arquivo do labirinto (ex.: `labirinto1.txt`)

---

## Trabalho Prático 2 - Comparação entre Árvores Balanceadas e Não-Balanceadas
[🔍 Ver pasta do projeto](./Trabalho%20II/)

Neste projeto, comparamos o desempenho de uma Árvore Binária de Busca (BST) não balanceada e de uma Árvore AVL (balanceada) em termos de operações de inserção e remoção.

### Conteúdo da Pasta
- [arvores.c](./Trabalho%20II/arvores.c): Código-fonte principal
- [arvores.h](./Trabalho%20II/arvores.h): Declarações de estruturas e protótipos de funções
- [funcoes.c](./Trabalho%20II/funcoes.c): Implementação de funções auxiliares para BST e AVL
- [descricao.pdf](./Trabalho%20II/descricao.pdf): Descrição detalhada do trabalho
- [instancias/](./Trabalho%20II/instancias/): Arquivos de teste com operações
- [Makefile](./Trabalho%20II/Makefile): Automação de compilação

### Como Executar
1. Compile o programa:
```bash
make clean
make
```
2. Execute o programa com:
```bash
./arvores N
```
Substitua `N` pelo número da instância a ser testada.

### Formato das Operações
- `I X`: Inserir o valor X na árvore
- `R X`: Remover o valor X da árvore

---

## Trabalho Prático 3 - Ordenação de Structs
[🔍 Ver pasta do projeto](./Trabalho%20III/)

Este projeto implementa e compara três algoritmos de ordenação: Bubble Sort, Merge Sort e Bucket Sort, utilizando uma lista de structs de jogadores.

### Conteúdo da Pasta
- [main.c](./Trabalho%20III/main.c): Código principal do programa
- [funcoes.c](./Trabalho%20III/funcoes.c): Implementação dos algoritmos de ordenação
- [tp3.h](./Trabalho%20III/tp3.h): Declarações e protótipos
- [descricao.pdf](./Trabalho%20III/descricao.pdf): Documento descritivo do trabalho
- [relatorio.pdf](./Trabalho%20III/relatorio.pdf): Relatório detalhado
- [jogadores.csv](./Trabalho%20III/jogadores.csv): Arquivo de entrada com dados dos jogadores
- [Makefile](./Trabalho%20III/Makefile): Automação de compilação

### Como Executar
1. Compile todos os arquivos:
```bash
make clean
make all
```
2. Execute o programa com:
```bash
./tp3 N
```
Substitua `N` pelo número do algoritmo:
- `1`: Bubble Sort
- `2`: Merge Sort
- `3`: Bucket Sort

### Estatísticas Geradas
- Tempo de execução
- Número de comparações
- Número de trocas
- Memória utilizada

[⬆️ Voltar ao topo](#repositório-de-trabalhos-práticos---aeds-2)