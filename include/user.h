//
// Created by guilh on 04/10/2024.
//

#ifndef USER_H
#define USER_H
#include "data.h"

typedef struct {
    int id;
    char name[50];
    char email[50];
    char password[50];
    Data dataUsuario;
} User;

typedef struct {
    User user;
    struct no *proximo;
} UserNode;



#endif //USER_H
