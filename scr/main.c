//
// Created by guilh on 04/10/2024.
//
#include <stdio.h>
#include "../include/user.h"

int main() {

    int opcao;
    UserNode *lista = NULL;

    do {
        printf("\n0 - Sair\n1 - Cadastrar Usuário\n2 - Imprimir Usuários");
        printf("\nEscolha: ");
        scanf("\n\n%d", &opcao);
        switch (opcao) {
            case 1:
                cadastrarUsuario(&lista, *receberInfoUsuario());
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





