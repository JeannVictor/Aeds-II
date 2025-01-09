
# Estruturas de Dados - Árvores
Esta pasta contém implementações de diferentes tipos de árvores, cada uma com suas características e aplicações específicas. Estas estruturas são fundamentais para organização e manipulação eficiente de dados.
---
## Conteúdo da Pasta

### 1. Árvore AVL
- **[Árvore AVL](./Árvore%20AVL/)**  
  Implementação de uma árvore AVL (Adelson-Velsky e Landis), uma árvore binária de busca balanceada que mantém a diferença entre as alturas das subárvores esquerda e direita limitada a 1, garantindo operações de busca, inserção e remoção em tempo O(log n).

### 2. Árvore B
- **[Árvore B](./Árvore%20B/)**  
  Implementação de uma árvore B, uma estrutura de dados em árvore que mantém os dados ordenados e permite inserções e remoções em tempo amortizado logarítmico. É especialmente útil para sistemas de arquivos e bancos de dados.

### 3. Árvore Binária de Busca
- **[Árvore Binária de Busca](./Árvore%20Binária%20de%20Busca/)**  
  Implementação de uma árvore binária de busca (BST), uma estrutura de dados em árvore onde cada nó tem no máximo dois filhos, e todos os nós na subárvore esquerda são menores que o nó atual, enquanto todos na direita são maiores.

### 4. Árvore de Partilha
- **[Árvore de Partilha](./Árvore%20de%20Partilha/)**  
  Implementação de uma árvore de partilha (Trie), uma estrutura de dados especializada que é usada principalmente para armazenar e recuperar strings, oferecendo busca eficiente de prefixos.

### 5. Árvore Heap
- **[Árvore Heap](./Árvore%20Heap/)**  
  Implementação de uma árvore heap, uma árvore binária especial que satisfaz a propriedade heap, onde o valor de cada nó é maior (max-heap) ou menor (min-heap) que seus filhos. Muito utilizada em filas de prioridade.

### 6. Árvore Rubro-Negra
- **[Árvore Rubro-Negra](./Árvore%20Rubro%20Negra/)**  
  Implementação de uma árvore rubro-negra, uma árvore binária de busca balanceada que utiliza coloração de nós para manter o balanceamento, garantindo operações em tempo O(log n).
---
## Características Gerais
Cada implementação inclui:
- Estruturas de nós específicas para cada tipo de árvore
- Funções de inserção e remoção
- Funções de busca
- Funções de balanceamento (quando aplicável)
- Funções de travessia
- Funções auxiliares para manipulação e visualização
---
## Como Usar
1. Escolha o tipo de árvore adequado para sua necessidade
2. Acesse a pasta correspondente
3. Consulte a documentação específica de cada implementação
4. Utilize os códigos de exemplo fornecidos
---
## Complexidade das Operações
- **Árvore AVL**: O(log n) para todas as operações
- **Árvore B**: O(log n) para busca, inserção e remoção
- **Árvore Binária de Busca**: O(h) onde h é a altura da árvore
- **Árvore de Partilha**: O(m) onde m é o comprimento da string
- **Árvore Heap**: O(log n) para inserção e remoção, O(1) para consulta do topo
- **Árvore Rubro-Negra**: O(log n) para todas as operações
---
