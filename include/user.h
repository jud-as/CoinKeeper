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
    struct UserNode *proximo;
} UserNode;




extern int idUser; // Declaração de uma variável global
void cadastrarUsuario(UserNode **listaUser, User novoUsuario);
void imprimirUser(UserNode *userNode);
void userToString(User user);
User* receberInfoUsuario();

#endif //USER_H
