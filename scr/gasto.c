//
// Created by guilh on 04/10/2024.
//

#include "../include/gasto.h"
#include <stdio.h>
#include <stdlib.h>

// Função para cadastrar novo gasto no inicio da lista de gastos
void cadastrarGastoImediato(GastoNode **listaGasto, Gasto novoGasto) {
    GastoNode *novoNode = malloc(sizeof(GastoNode)); // Aloca memória para o novo gasto

    if (novoNode) {
        novoNode->gasto = novoGasto; // Atribui gasto passado como parâmetro ao novo node criado
        novoNode->proximo = *listaGasto; // Aponta o novo node ao inicio da lista de gastos
        *listaGasto = novoNode;

    }
    else
        printf("Erro ao alocar memória para o novo gasto.\n");

}
