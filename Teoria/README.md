# Estruturas de Dados

Pasta contendo implementações de diversas estruturas de dados fundamentais na computação. Este material abrange desde estruturas básicas até implementações mais complexas e otimizadas.

## [Árvores](./Árvores%20/)

Esta pasta contém diferentes implementações de estruturas de árvore, cada uma com suas características específicas:

### 1. [Árvore AVL](./Árvores%20/Árvore%20AVL/)
- Árvore binária de busca auto-balanceada
- Mantém diferença máxima de altura de 1 entre subárvores
- Complexidade: O(log n) para operações básicas

### 2. [Árvore B](./Árvores%20/Árvore%20B/)
- Árvore balanceada otimizada para sistemas de armazenamento
- Permite que os nós tenham mais de dois filhos
- Ideal para sistemas de arquivos e bancos de dados

### 3. [Árvore Binária de Busca](./Árvores%20/Árvore%20Binária%20de%20Busca/)
- Estrutura hierárquica com no máximo dois filhos por nó
- Elementos menores à esquerda, maiores à direita
- Base para implementações mais complexas

### 4. [Árvore de Partilha](./Árvores%20/Árvore%20de%20Partilha/)
- Especializada para armazenamento de strings
- Eficiente para buscas de prefixos
- Muito utilizada em dicionários e auto-complete

### 5. [Árvore Heap](./Árvores%20/Árvore%20Heap/)
- Árvore binária com propriedade heap
- Usada em filas de prioridade
- Base para o algoritmo Heapsort

### 6. [Árvore Rubro Negra](./Árvores%20/Árvore%20Rubro%20Negra/)
- Árvore binária de busca balanceada
- Usa esquema de coloração para manter balanceamento
- Garante complexidade O(log n) em operações

## [Listas Lineares](./Listas%20Lineares)

Implementações de estruturas de dados lineares:

### 1. [Alocação Sequencial](./Listas%20Lineares/Alocação%20Sequencial)
- Arrays e vetores
- Lista, pilha e fila com alocação contígua
- Acesso direto aos elementos

### 2. [Alocação Encadeada](./Listas%20Lineares/Alocação%20Encadeada)
- Listas ligadas (simples e dupla)
- Pilhas e filas dinâmicas
- Alocação dinâmica de memória

## [Tabela Hash + Ordenação](./TabelaHash%2BOrdenação)

Implementações de algoritmos de ordenação e tabela hash:

- [BubbleSort](./TabelaHash%2BOrdenação/BubbleSort)
- [HeapSort](./TabelaHash%2BOrdenação/HeapSort)
- [MergeSort](./TabelaHash%2BOrdenação/MergeSort)
- [Tabela Hash](./TabelaHash%2BOrdenação/Tabela%20Hash)

## Características Gerais

Cada implementação contém:
- Código fonte comentado
- Documentação explicativa
- Análise de complexidade
- Exemplos de uso

## Como Utilizar

1. Escolha a estrutura adequada para seu problema
2. Acesse a pasta correspondente através dos links
3. Consulte a documentação disponível
4. Verifique os exemplos de implementação

## Estrutura de Diretórios

```
.
├── Árvores/
│   ├── Árvore AVL/
│   ├── Árvore B/
│   ├── Árvore Binária de Busca/
│   ├── Árvore de Partilha/
│   ├── Árvore Heap/
│   └── Árvore Rubro Negra/
├── Listas Lineares/
│   ├── Alocação Sequencial/
│   └── Alocação Encadeada/
└── TabelaHash +Ordenação/
    ├── BubbleSort/
    ├── HeapSort/
    ├── MergeSort/
    └── Tabela Hash/
```