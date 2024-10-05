//
// Created by guilh on 04/10/2024.
//

#include "../include/user.h"
#include <stdlib.h>
#include <stdio.h>

#include "../include/gasto.h"

int idUser = 1;

// Função para cadastrar um novo usuário na lista de usuários
void cadastrarUsuario(UserNode **listaUser, User novoUsuario) {
    UserNode *novoNode = malloc(sizeof(UserNode)); // Aloca memória para o novo usuário

    if(novoNode) {
        novoUsuario.id = idUser++;
        novoNode->user = novoUsuario; // Atribui o usuário passado como parâmetro ao novo nó da lista
        novoNode->proximo = *listaUser; // Aponta o novo nó criado ao início da lista
        *listaUser = novoNode; // Atualiza o início da lista para o novo nó criado
    }
    else
        printf("Erro ao alocar memória para o novo usuário.\n");
}

void imprimirUser(UserNode *userNode) {
    printf("\n\tLista de Usuários: ");
    while (userNode != NULL) {
        userToString(userNode->user);
        userNode = userNode->proximo;
    }
    printf("\n\n");
}
