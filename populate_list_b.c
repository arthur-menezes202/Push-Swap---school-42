#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Usado para exemplificar a semente aleatória

#include "push_swap.h"
// Sua estrutura de nó da lista

// --- Funções Auxiliares ---

// Função para adicionar um novo nó no final da lista
void add_to_list_end(t_b_node **list, int value)
{
    t_b_node *new_node = (t_b_node *)malloc(sizeof(t_b_node));
    if (new_node == NULL) {
        printf("Erro ao alocar memoria.\n");
        return;
    }
    new_node->data = value;
    new_node->next = NULL;

    if (*list == NULL) {
        *list = new_node;
    } else {
        t_b_node *current = *list;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
}

// Libera a memória de toda a lista
void free_list(t_b_node *list) {
    t_b_node *current;
    while (list != NULL) {
        current = list;
        list = list->next;
        free(current);
    }
}

// Imprime a lista para verificação
void print_list(t_b_node *list) {
    t_b_node *current = list;
    printf("Lista: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// --- A FUNCAO PRINCIPAL ---

// Funcao para popular a lista com numeros aleatorios, porem fixos
void populate_list(t_b_node **list, int count)
{
    int i;
    int random_value;

    // Use uma semente fixa (ex: 42). Isso garante que a sequencia de
    // numeros aleatorios sera a mesma em todas as execucoes.
    // Para ter numeros realmente aleatorios, use srand(time(NULL));
    srand(42); 

    for (i = 0; i < count; i++)
    {
        // Gera um numero aleatorio (ex: de 0 a 999)
        random_value = rand() % 1000;
        
        // Adiciona o numero gerado na sua lista
        add_to_list_end(list, random_value);
    }
}

// --- Exemplo de Uso na Main ---

// int main()
// {
//     t_b_node *my_list = NULL;
//     int num_elements = 5;

//     // Chama a função para popular a lista
//     populate_list(&my_list, num_elements);

//     // Imprime a lista para ver os numeros gerados
//     print_list(my_list);

//     // Libera a memoria alocada
//     free_list(my_list);
    
//     return 0;
// }