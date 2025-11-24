# ⚙️ Push Swap - Otimização de Algoritmos de Ordenação (42 School)

[](https://github.com/arthur-menezes202/Push-Swap---school-42)
[](https://en.wikipedia.org/wiki/C_\(programming_language\))
[](https://www.42sp.org.br/)

## 📝 Visão Geral do Projeto

**Push Swap** é um projeto de programação que desafia o desenvolvedor a **ordenar uma pilha de números inteiros** (`stack A`) e, usando um conjunto limitado de instruções, transferir e reordenar esses números para uma segunda pilha vazia (`stack B`), retornando-os ordenados para a pilha `A`.

O objetivo final não é apenas ordenar, mas fazê-lo usando o **menor número de operações possível**. Isso transforma o projeto em um exercício de otimização de algoritmos.

## 🎯 Objetivo de Aprendizagem

O desenvolvimento do Push Swap aprimorou drasticamente as seguintes habilidades:

  * **Algoritmos de Ordenação:** Desenvolvimento de algoritmos de ordenação complexos e eficientes, indo além dos métodos tradicionais (`Bubble Sort`, `Selection Sort`).
  * **Estrutura de Dados (Pilhas):** Manipulação rigorosa e eficiente de estruturas de dados do tipo LIFO (Last-In, First-Out), adaptando o funcionamento das pilhas às regras do projeto.
  * **Otimização de Movimentos:** Foco na minimização do *score* (número de instruções), o que exige a criação de heurísticas para escolher o movimento mais vantajoso em cada etapa do processo.
  * **Raciocínio Lógico:** Tradução de uma lógica de ordenação complexa em um conjunto restrito de comandos.

## 🛠️ Instruções Permitidas

O problema deve ser resolvido utilizando **apenas** os seguintes 11 comandos de pilha:

| Comando | Descrição |
| :--- | :--- |
| **`sa` / `sb` / `ss`** | **Swap:** Troca os 2 primeiros elementos no topo da pilha `a` ou `b`. (`ss` faz `sa` e `sb` simultaneamente). |
| **`pa` / `pb`** | **Push:** Pega o primeiro elemento de `b` e coloca no topo de `a` (`pa`), ou vice-versa (`pb`). |
| **`ra` / `rb` / `rr`** | **Rotate:** Desloca todos os elementos da pilha `a` ou `b` para cima. O primeiro elemento se torna o último. (`rr` faz `ra` e `rb` simultaneamente). |
| **`rra` / `rrb` / `rrr`** | **Reverse Rotate:** Desloca todos os elementos da pilha `a` ou `b` para baixo. O último elemento se torna o primeiro. (`rrr` faz `rra` e `rrb` simultaneamente). |

## 💡 Algoritmo de Ordenação

Para resolver a parte mandátória, foi implementado um algoritmo baseado em **divisão por *chunks*** (pedados) ou **Radix Sort adaptado**, que consiste em:

1.  **Pré-processamento:** Converter os valores de entrada para um sistema de índices (coordenadas) para trabalhar com números sequenciais, facilitando a lógica de ordenação.
2.  **Particionamento:** Transferir os elementos de `A` para `B` em grupos definidos pelo bit (Radix) ou pelo tamanho do *chunk*, mantendo alguns elementos-chave na pilha `A`.
3.  **Seleção Otimizada:** Criar uma lógica para calcular o **custo** de mover cada elemento de volta de `B` para `A`, garantindo que o elemento certo seja movido para a posição certa com o número mínimo de rotações combinadas (`ra`, `rb`, `rr`, `rrr`).

## ⚙️ Instalação e Uso

O projeto é dividido em dois programas: o **`checker`** (não implementado neste repo, mas usado para testar) e o **`push_swap`** (o resolvedor de algoritmo).

### Compilação

Para compilar o executável `push_swap`, use o `make`:

```bash
git clone https://github.com/arthur-menezes202/Push-Swap---school-42.git
cd Push-Swap---school-42
make
```

### Execução

O programa recebe uma lista de números inteiros como argumentos na linha de comando e imprime a sequência de instruções necessária para ordená-los.

**Exemplo:**

```bash
# Executa o programa com a lista de números e imprime as instruções
./push_swap 2 1 3 6 5 4
```

**Saída de Exemplo (Instruções):**

```
pb
ra
pb
sa
...
```

## 🧑‍💻 Autor

| [](https://www.google.com/search?q=https://github.com/arthur-menezes202) | **Arthur Menezes** |
| :---: | :--- |
| | **Perfil GitHub:** [@arthur-menezes202](https://www.google.com/search?q=https://github.com/arthur-menezes202) |
| | **School 42:** armeneze |
