//
// Created by guilh on 04/10/2024.
//

#ifndef GASTO_H
#define GASTO_H
#include "data.h"



typedef struct {
    int id;
    char descricao[50];
    float valor;
    Data dataGasto;
} Gasto;

#endif //GASTO_H
