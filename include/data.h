//
// Created by guilh on 04/10/2024.
//

#ifndef DATA_H
#define DATA_H
#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

inline void dataToString(Data data) {
    printf("\nDia: %d", data.mes);
    printf("\nMês: %d", data.dia);
    printf("\nAno: %d", data.ano);

}
#endif //DATA_H
