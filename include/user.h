//
// Created by guilh on 04/10/2024.
//

#ifndef USER_H
#define USER_H
#include "data.h"
#include <stdio.h>


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

inline void userToString(User user) {
    printf("\nID: %d", user.id);
    printf("\nNome: %s", user.name);
    printf("\nE-mail: %s", user.email);
    printf("\nSenha: %s", user.password);
    printf("\nData de registro: ");
    dataToString(user.dataUsuario);
}




extern int idUser; // Declaração de uma variável global

#endif //USER_H
