#include <stdio.h>


void sessoes(){
    int escolha;

        printf("###                             1 - CRIAR SESSÃO                              ###\n");
        printf("###                             2 - PROCURAR SESSÃO                              ###\n");
        printf("###                             3 - ATUALIZAR SESSÃO                              ###\n");
        printf("###                             4 - DELETAR SESSÃO                              ###\n");
        printf("###                             0 - SAIR                              ###\n");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("1 - Criar sessão");
            break;
        case 2:
            printf("2 - Procurarr sessão");
            break;
        case 3:
            printf("3 - Atualizar sessão");
            break;
        case 4:
            printf("4 - Deletar sessão");
            break;
        case 0:
            printf("0 - Saindo...");
            break;
        default:
            printf("Opção inválida ");
            break;
        }
    }

int main(){
    sessoes();
    return 0;
}