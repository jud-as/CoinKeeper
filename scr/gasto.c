//
// Created by guilh on 04/10/2024.
//

#include "../include/gasto.h"
#include <stdio.h>
#include <stdlib.h>

int proximoIdGasto = 1; // Define e aloca a memória para a variável global no arquivo de implementação


// Função para cadastrar novo gasto no inicio da lista de gastos
void cadastrarGastoImediato(GastoNode **listaGasto, Gasto novoGasto) {
    GastoNode *novoNode = malloc(sizeof(GastoNode)); // Aloca memória para o novo gasto

    if (novoNode) {
        novoGasto.id = proximoIdGasto++;
        novoNode->gasto = novoGasto; // Atribui gasto passado como parâmetro ao novo node criado
        novoNode->proximo = *listaGasto; // Aponta o novo node ao inicio da lista de gastos
        *listaGasto = novoNode;

    }
    else
        printf("Erro ao alocar memória para o novo gasto.\n");

}

// Função para cadastrar novo gasto no final da fila de gastos
void cadastrarGastoSecundario(GastoNode **listaGasto, Gasto novoGasto) {
    GastoNode *aux, *novoNode = malloc(sizeof(GastoNode));

    if (novoNode) {
        novoGasto.id = proximoIdGasto++;
        novoNode->gasto = novoGasto;
        novoNode->proximo = NULL;
        // Verifica se a lista está vazia
        if(*listaGasto == NULL)
            *listaGasto = novoNode;
        else {
            aux = *listaGasto;
            while(aux->proximo != NULL) // Percorrer a lista até o ultimo node
                aux = aux->proximo;
            aux->proximo = novoNode;
        }
    }
    else
        printf("Erro ao alocar memória para o novo gasto.\n");
}

