
# Estruturas de Dados Sequenciais em C
Esta pasta contém diferentes implementações de estruturas de dados sequenciais em C, demonstrando várias formas de organização e manipulação de dados em memória contígua.
---
## Conteúdo do Repositório
### 1. Implementação com Vetores
- **[VetorSequencial.c](./VetorSequencial.c)**  
  Implementação de uma estrutura sequencial usando vetores, permitindo acesso direto aos elementos através de índices. Inclui operações básicas de manipulação de dados em um array.

### 2. Implementação de Fila Sequencial
- **[FilaSequencial.c](./FilaSequencial.c)**  
  Implementação de uma fila usando estrutura sequencial, seguindo o princípio FIFO (First In, First Out). Os elementos são armazenados em um array e manipulados através de índices de início e fim.

### 3. Implementação de Pilha Sequencial
- **[PilhaSequencial.c](./PilhaSequencial.c)**  
  Implementação de uma pilha usando estrutura sequencial, seguindo o princípio LIFO (Last In, First Out). Os elementos são armazenados em um array e manipulados através de um índice de topo.

### 4. Exemplos de Buscas
- **[Buscas](./Buscas/)**  
  Pasta contendo implementações de diferentes algoritmos de busca em estruturas sequenciais, como busca linear e busca binária.
---
## Estruturas Implementadas
Cada arquivo contém uma implementação completa com:
- Definição das estruturas
- Funções de inserção
- Funções de remoção
- Funções de busca
- Funções de manipulação
- Funções auxiliares (impressão, verificação, etc.)
---
## Como Usar
1. Escolha o tipo de estrutura sequencial desejada
2. Compile o arquivo .c correspondente
3. Execute o programa para interagir com a estrutura através do menu de opções
---
## Características das Implementações
- Uso de arrays estáticos ou dinâmicos
- Gerenciamento de índices para controle de elementos
- Tratamento de casos de overflow (estrutura cheia)
- Tratamento de casos de underflow (estrutura vazia)
- Códigos comentados para melhor compreensão
---
## Notas de Implementação
- As estruturas utilizam arrays para armazenamento
- Cada implementação inclui verificações de limites
- Operações são otimizadas para acesso sequencial
---