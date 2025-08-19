void tecnicos(){
    int escolha;

        printf("###                             1 - CADASTRAR TÉCNICO                              ###\n");
        printf("###                             2 - PROCURAR TÉCNICO                             ###\n");
        printf("###                             3 - ATUALIZAR TÉCNICO                           ###\n");
        printf("###                             4 - DELETAR TÉCNICO                           ###\n");
        printf("###                             0 - VOLTAR AO MENU ANTERIOR...                      ###\n");
        scanf("%d", &escolha);
    //repetição e afins
        switch (escolha)
        {
        case 1:
            printf("1 - Cadastrar técnico\n");
            cadastro_tecnico();
        case 2:
            printf("2 - Procurar técnico\n");
            pesquisar_tecnico();
        case 3:
            printf("3 - Atualizar técnico\n");
            atualizar_tecnico();
        case 4:
            printf("4 - Deletar técnico\n");
            deletar_tecnico();
        case 0:
            printf("0 - Voltar ao anterior...\n");
            break;
        default:
            printf("Opção inválida ");
            break;
        }
    }

void cadastro_tecnico(){
    system("clear" || "cls");
    printf("CPF: ");
    printf("Nome completo: ");
    printf("Email:");
    printf("Telefone");
}

void atualizar_tecnico(){
    system("clear" || "cls");
    printf("CPF: ");
    printf("Nome completo: ");
    printf("Email:");
    printf("Telefone");
}

void pesquisar_tecnico(){
    system("clear" || "cls");
    printf("CPF: ");
}

void deletar_tecnico(){
    system("clear" || "cls");
    printf("CPF: ");
}