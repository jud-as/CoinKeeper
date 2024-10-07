//
// Created by guilh on 04/10/2024.
//

#include "../include/user.h"
#include <stdlib.h>
#include <stdio.h>


int idUser = 1;


User* receberInfoUsuario() {
    User *usuario = malloc(sizeof(User));

    if (usuario) {
        printf("Nome: ");
        scanf("%s", usuario->name);
        printf("E-mail: ");
        scanf("%s", usuario->email);
        printf("Senha: ");
        scanf("%s", usuario->password);

        usuario->dataUsuario.dia = 23;
        usuario->dataUsuario.mes = 3;
        usuario->dataUsuario.ano = 2003;

        return usuario;
    } else {
        printf("Não foi possivel alocar memória do novo usuário.");
        return NULL;
    }



}

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

inline void userToString(User user) {
    printf("\nID: %d", user.id);
    printf("\nNome: %s", user.name);
    printf("\nE-mail: %s", user.email);
    printf("\nSenha: %s", user.password);
    printf("\nData de registro: ");
    printf("\nDia: %d", user.dataUsuario.dia);
    printf("\nMes: %d", user.dataUsuario.mes);
    printf("\nAno: %d", user.dataUsuario.ano);
}

void imprimirUser(UserNode *listaUsuarios) {
    printf("\n\tLista de Usuários: ");
    while (listaUsuarios != NULL) {
        userToString(listaUsuarios->user);
        listaUsuarios = listaUsuarios->proximo;
        printf("\n\n");
    }

}

