#include <stdio.h>

void sessoes(){
    int escolha;

        printf("###                             1 - CRIAR SESSÃO                              ###\n");
        printf("###                             2 - PROCURAR SESSÃO                              ###\n");
        printf("###                             3 - ATUALIZAR SESSÃO                              ###\n");
        printf("###                             4 - DELETAR SESSÃO                              ###\n");
        printf("###                             0 - VOLTAR AO MENU ANTERIOR...                      ###\n");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("1 - Criar sessão\n");
            break;
        case 2:
            printf("2 - Procurar sessão\n");
            break;
        case 3:
            printf("3 - Atualizar sessão\n");
            break;
        case 4:
            printf("4 - Deletar sessão\n");
            break;
        case 0:
            printf("0 - Voltar ao anterior...\n");
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