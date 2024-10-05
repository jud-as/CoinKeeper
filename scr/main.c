//
// Created by guilh on 04/10/2024.
//
#include <stdio.h>
#include "../scr/user.c"

int main() {

    int opcao;
    UserNode *lista = NULL;

    do {
        printf("\n\t0 - Sair\n\t1 - Cadastrar Usuário\n\t2 - Imprimir Usuários");
        scanf("%d", &opcao);

        User user = {
            .id = 0,
            .email = "user@gmail.com",
            .name = "judas",
            .password = "1234",
            .dataUsuario = {
                .dia = 23,
                .mes = 03,
                .ano = 2003,
            }
        };
        switch (opcao) {
            case 1:
                cadastrarUsuario(&lista, user);
                break;
            case 2:
                break;
            default:
                if (opcao != 0)
                    printf("Opcao inválida.");
        }

    }while(opcao != 0);

    return 0;
}





