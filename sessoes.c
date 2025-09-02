void sessoes(){
    int escolha;

        printf("###                             1 - CRIAR SESSÃO                              ###\n");
        printf("###                             2 - PROCURAR SESSÃO                              ###\n");
        printf("###                             3 - ATUALIZAR SESSÃO                              ###\n");
        printf("###                             4 - DELETAR SESSÃO                              ###\n");
        printf("###                             0 - VOLTAR AO MENU ANTERIOR...                      ###\n");
        scanf("%d", &escolha);
//repetição e afins
        switch (escolha)
        {
        case 1:
            printf("1 - Criar sessão\n");
            criar_sessao();
        case 2:
            printf("2 - Procurar sessão\n");
            procurar_sessao();
        case 3:
            printf("3 - Atualizar sessão\n");
            atualizar_sessao();
        case 4:
            printf("4 - Deletar sessão\n");
            deletar_sessao();
        case 0:
            printf("0 - Voltar ao anterior...\n");
            break;
        default:
            printf("Opção inválida ");
            break;
        }
    }

void criar_sessao(){
    system("clear" || "cls");
    printf("ID SESSÃO: ");
}

void procurar_sessao(){
    system("clear" || "cls");
    printf("ID SESSÃO: ");
}

void atualizar_sessao(){
    system("clear" || "cls");
    printf("ID SESSÃO: ");
}

void deletar_sessao(){
    system("clear" || "cls");
    printf("ID SESSÃO: ");
}