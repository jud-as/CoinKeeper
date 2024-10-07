//
// Created by guilh on 04/10/2024.
//
#include <stdio.h>
#include "../include/user.h"

int main() {

    int opcao;
    UserNode *lista = NULL;
    User usuario;
    Data data;

    data.dia = 23;
    data.mes = 03;
    data.ano = 2003;

    snprintf(usuario.email, sizeof(usuario.email), "judas@gmail.com");
    snprintf(usuario.name, sizeof(usuario.name), "judas");
    snprintf(usuario.password, sizeof(usuario.password), "1234");

    usuario.dataUsuario = data;

    do {
        printf("\n0 - Sair\n1 - Cadastrar Usuário\n2 - Imprimir Usuários");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                cadastrarUsuario(&lista, usuario);
                break;
            case 2:
                imprimirUser(lista);
                break;

            default:
                if (opcao != 0)
                    printf("Opcao inválida.");
        }

    }while(opcao != 0);

    return 0;
}





