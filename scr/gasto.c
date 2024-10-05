//
// Created by guilh on 04/10/2024.
//

#include "../include/gasto.h"
#include <stdio.h>
#include <stdlib.h>

int idGasto = 1; // Define e aloca a memória para a variável global no arquivo de implementação


// Função para cadastrar novo gasto no inicio da lista de gastos
void cadastrarGastoImediato(GastoNode **listaGasto, Gasto novoGasto) {
    GastoNode *novoNode = malloc(sizeof(GastoNode)); // Aloca memória para o novo gasto

    if (novoNode) {
        novoGasto.id = idGasto++;
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
        novoGasto.id = idGasto++;
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

// Função para inserir gasto no meio da lista de gastos
void cadastroGastoModerado(GastoNode **listaGasto, Gasto novoGasto, Gasto gastoAnterior) {
    GastoNode *aux, *novoNode = malloc(sizeof(GastoNode));

    if (novoNode) {
        novoGasto.id = idGasto++;
        novoNode->gasto = novoGasto;
        // Verifica se a lista está vazia
        if (*listaGasto == NULL) {
            novoNode->proximo = NULL;
            *listaGasto = novoNode;
        }
        else {
            aux = *listaGasto;
            // Percorre a lista até o final ou até chegar no valor de referência
            while(aux->gasto.id != gastoAnterior.id && aux->proximo != NULL)
                aux = aux->proximo;
            novoNode->proximo = aux->proximo; // Atribui o próximo node de aux ao proximo node de novoNode
            aux->proximo = novoNode; // Adiciona o novo node à frente do node de referencia
        }
    }
    else
        printf("Erro ao alocar memória para o novo gasto.\n");
}
