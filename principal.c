#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#ifdef _WIN64 // Caso windows 64, use:
    #include <windows.h>  //Trecho de código tirado do ChatGPT
#else // Se não, Linux,Mcos, use:
    #include <unistd.h>
#endif


//INFO
void proj_Descrit();
void equipe();

//ANIMAÇÕES
void ani_Encerrar();
void func_Ani(int tempo);

//MÓDULOS
void ingresso();
void vender_Ingresso();
void excluir_Ingresso();                
void atualizar_Ingresso();
void pesquisar_Ingresso();

void shows();
void cadastrar_Show();
void excluir_Show();
void atualizar_Show();
void pesquisar_Show();

void sessoes();
void criar_Sessao();
void procurar_Sessao();
void atualizar_Sessao();
void excluir_Sessao();

void tecnicos();
void cadastro_Tecnico();
void atualizar_Tecnico();
void pesquisar_Tecnico();
void excluir_Tecnico();



int main() {
    int tempo = 100;
    bool parada = true;
    while (parada){ 
        system("clear||cls");
        char executar;
        printf("#####################################################################################\n");
        func_Ani(tempo);
        printf("   +++                           SISTEMA DE TEATRO                             +++\n");
        func_Ani(tempo);
        printf("#####################################################################################\n");
        func_Ani(tempo);
        printf("###                             1 - INGRESSO                                      ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("###                             2 - SHOWS/PECAS                                   ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("###                             3 - SESSOES                                       ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("###                             4 - TECNICOS                                      ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("###                             5 - RELATORIO                                     ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("##                              0 - SAIR : ");
        scanf(" %c",&executar);

        switch (executar){
            case '1':
                ingresso();
                break;
            case '2':
                shows();
                break;
            case '3':
                sessoes();
                break;
            case '4':
                tecnicos();   
            case '0':
                parada = false;
                ani_Encerrar();
                break;
            default:
                printf("\n \n");
                printf("!VALOR INVALIDO, POR FAVOR INSERIR APENAS UM DOS VALORES ACIMA!\n");
                system("pause");
                break;
        }
    } 
return 0; 
}



void ingresso(){  
    int tempo = 100;
    bool parada_I = true;
    while (parada_I){  
        char executar_I;
        system("clear||cls");
        printf("#####################################################################################\n");
        func_Ani(tempo);
        printf("   +++                                INGRESSO                                 +++\n");
        func_Ani(tempo);
        printf("#####################################################################################\n");
        func_Ani(tempo);
        printf("###                             1 - VENDER INGRESSO                               ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("###                             2 - EXCLUIR INGRESSO                              ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("###                             3 - ALTERAR INGRESSO                              ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("###                             4 - PESQUISAR INGRESSO                            ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("##                              0 - SAIR : ");
        scanf(" %c",&executar_I);

        switch (executar_I)
        {
            case '1':
                vender_Ingresso();
            case '2':
                excluir_Ingresso();
            case '3':
                atualizar_Ingresso();

            case '4':
                pesquisar_Ingresso();
            case '0':
                main();
                break;
            default:
                printf("\n \n");
                printf("!VALOR INVÁLIDO, POR FAVOR INSERIR OS UM DOS VALORES ACIMA!\n");
                system("pause");
    }
  }
}

void shows(){  
    int tempo = 100;
    bool parada_S = true;
    while (parada_S){  
        char executar_S;
        system("clear||cls");
        printf("#####################################################################################\n");
        func_Ani(tempo);
        printf("   +++                                  SHOWS                                 +++\n");
        func_Ani(tempo);
        printf("#####################################################################################\n");
        func_Ani(tempo);
        printf("###                             1 - CADASTRAR SHOW                                ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("###                             2 - EXCLUIR SHOW                                  ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("###                             3 - ATUALIZAR SHOW                                ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("###                             4 - PESQUISAR SHOW                                ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("##                              0 - SAIR : ");
        scanf(" %c",&executar_S);

        switch (executar_S)
        {
            case '1':
                cadastrar_Show();
                break;
            case '2':
                excluir_Show();
                break;
            case '3':
                atualizar_Show();
                break;
            case '4':
                pesquisar_Show();
                break;
            case '0':
                main();
                break;
            default:
                printf("\n \n");
                printf("!VALOR INVÁLIDO, POR FAVOR INSERIR OS UM DOS VALORES ACIMA!\n");
                system("pause");
    }
  }
}

void tecnicos(){
    int escolha;
        system("clear || cls");
        printf("###                             1 - CADASTRAR TECNICO                              ###\n");
        printf("###                             2 - PROCURAR TÉCNICO                               ###\n");
        printf("###                             3 - ATUALIZAR TÉCNICO                              ###\n");
        printf("###                             4 - DELETAR TÉCNICO                                ###\n");
        printf("###                             0 - VOLTAR AO MENU ANTERIOR...                     ###\n");
        scanf(" %d", &escolha);
    //repetição e afins
        switch (escolha)
        {
        case 1:
            printf("1 - Cadastrar técnico\n");
            cadastro_Tecnico();
        case 2:
            printf("2 - Procurar técnico\n");
            pesquisar_Tecnico();
        case 3:
            printf("3 - Atualizar técnico\n");
            atualizar_Tecnico();
        case 4:
            printf("4 - Deletar técnico\n");
            excluir_Tecnico();
        case 0:
            printf("0 - Voltar ao anterior...\n");
            break;
        default:
            printf("Opção inválida ");
            break;
        }
    }

void sessoes(){
    int escolha;
        system("clear || cls");
        printf("###                             1 - CRIAR SESSÃO                                 ###\n");
        printf("###                             2 - PROCURAR SESSÃO                              ###\n");
        printf("###                             3 - ATUALIZAR SESSÃO                             ###\n");
        printf("###                             4 - DELETAR SESSÃO                               ###\n");
        printf("###                             0 - VOLTAR AO MENU ANTERIOR...                   ###\n");
        scanf("%d", &escolha);
//repetição e afins
        switch (escolha)
        {
        case 1:
            printf("1 - Criar sessão\n");
            criar_Sessao();
        case 2:
            printf("2 - Procurar sessão\n");
            procurar_Sessao();
        case 3:
            printf("3 - Atualizar sessão\n");
            atualizar_Sessao();
        case 4:
            printf("4 - Deletar sessão\n");
            excluir_Sessao();
        case 0:
            printf("0 - Voltar ao anterior...\n");
            break;
        default:
            printf("Opção inválida ");
            break;
        }
    }




//############### FUNÇÕES MÓDULO INGRESSO ##################################################
void vender_Ingresso(){
    system("clear||cls");
    int i;
     //Primeira Linha
    for(i = 0; i<70; i++){  
        printf("#");
        func_Ani(1);
    }
    printf("\n");

    //Segunda Linha
    for(i = 0;i<27; i++){
        if (i > 3 && i < 7){ 
            printf("+");
            func_Ani(15);
        } 
        else{
            printf(" ");
            func_Ani(15);
        }
    }
    printf("VENDER INGRESSO");
    
    for(i = 0;i<31;i++){
        if (i > 19 && i < 24){
            printf("+");
            func_Ani(15);
        }
        else{
            printf(" ");
            func_Ani(1);
        }
    }
    printf("\n");

    // Terceira Linha
    for(i = 0; i<70; i++){  
        printf("#");
        func_Ani(1);
    }
    printf("\n");

    ingresso();

}

void excluir_Ingresso(){
    system("clear||cls");
    int i;
     //Primeira Linha
    for(i = 0; i<70; i++){  
        printf("#");
        func_Ani(1);
    }
    printf("\n");

    //Segunda Linha
    for(i = 0;i<27; i++){
        if (i > 3 && i < 7){ 
            printf("+");
            func_Ani(15);
        } 
        else{
            printf(" ");
            func_Ani(15);
        }
    }
    printf("EXCLUIR INGRESSO");
    
    for(i = 0;i<31;i++){
        if (i > 19 && i < 24){
            printf("+");
            func_Ani(15);
        }
        else{
            printf(" ");
            func_Ani(1);
        }
    }
    printf("\n");

    // Terceira Linha
    for(i = 0; i<70; i++){  
        printf("#");
        func_Ani(1);
    }
    printf("\n");

    ingresso();
}

void atualizar_Ingresso(){
    system("clear||cls");
    int i;
     //Primeira Linha
    for(i = 0; i<70; i++){  
        printf("#");
        func_Ani(1);
    }
    printf("\n");

    //Segunda Linha
    for(i = 0;i<27; i++){
        if (i > 3 && i < 7){ 
            printf("+");
            func_Ani(15);
        } 
        else{
            printf(" ");
             func_Ani(15);
        }
    }
    printf("ALTERAR INGRESSO");
    
    for(i = 0;i<31;i++){
        if (i > 19 && i < 24){
            printf("+");
             func_Ani(15);
        }
        else{
            printf(" ");
            func_Ani(1);
        }
    }
    printf("\n");

    // Terceira Linha
    for(i = 0; i<70; i++){  
        printf("#");
        func_Ani(1);
    }
    printf("\n");

    ingresso();
}

void pesquisar_Ingresso(){
    system("clear||cls");
    int i;
     //Primeira Linha
    for(i = 0; i<70; i++){  
        printf("#");
        func_Ani(1);
    }
    printf("\n");

    //Segunda Linha
    for(i = 0;i<27; i++){
        if (i > 3 && i < 7){ 
            printf("+");
            func_Ani(15);
        } 
        else{
            printf(" ");
            func_Ani(15);
        }
    }
    printf("PESQUISAR INGRESSO");
    
    for(i = 0;i<31;i++){
        if (i > 19 && i < 24){
            printf("+");
            func_Ani(15);
        }
        else{
            printf(" ");
            func_Ani(1);
        }
    }
    printf("\n");

    // Terceira Linha
    for(i = 0; i<70; i++){  
        printf("#");
        func_Ani(1);
    }
    printf("\n");

    ingresso();
}


//############### FUNÇÕES MÓDULO SHOWS #####################################################
void cadastrar_Show(){
    system("clear||cls");
    int i;
     //Primeira Linha
    for(i = 0; i<70; i++){  
        printf("#");
        func_Ani(1);
    }
    printf("\n");

    //Segunda Linha
    for(i = 0;i<27; i++){
        if (i > 3 && i < 7){ 
            printf("+");
            func_Ani(15);
        } 
        else{
            printf(" ");
            func_Ani(15);
        }
    }
    printf("CADASTRAR SHOW");
    
    for(i = 0;i<31;i++){
        if (i > 19 && i < 24){
            printf("+");
            func_Ani(15);
        }
        else{
            printf(" ");
            func_Ani(1);
        }
    }
    printf("\n");

    // Terceira Linha
    for(i = 0; i<70; i++){  
        printf("#");
        func_Ani(1);
    }
    printf("\n");

    shows();

}

void excluir_Show(){
     system("clear||cls");
    int i;
     //Primeira Linha
    for(i = 0; i<70; i++){  
        printf("#");
        func_Ani(1);
    }
    printf("\n");

    //Segunda Linha
    for(i = 0;i<27; i++){
        if (i > 3 && i < 7){ 
            printf("+");
            func_Ani(15);
        } 
        else{
            printf(" ");
            func_Ani(15);
        }
    }
    printf("EXCLUIR SHOW");
    
    for(i = 0;i<31;i++){
        if (i > 19 && i < 24){
            printf("+");
            func_Ani(15);
        }
        else{
            printf(" ");
            func_Ani(1);
        }
    }
    printf("\n");

    // Terceira Linha
    for(i = 0; i<70; i++){  
        printf("#");
        func_Ani(1);
    }
    printf("\n");

    shows();
}

void atualizar_Show(){
     system("clear||cls");
    int i;
     //Primeira Linha
    for(i = 0; i<70; i++){  
        printf("#");
        func_Ani(1);
    }
    printf("\n");

    //Segunda Linha
    for(i = 0;i<27; i++){
        if (i > 3 && i < 7){ 
            printf("+");
            func_Ani(15);
        } 
        else{
            printf(" ");
            func_Ani(15);
        }
    }
    printf("ATUALIZAR SHOW");
    
    for(i = 0;i<31;i++){
        if (i > 19 && i < 24){
            printf("+");
            func_Ani(15);
        }
        else{
            printf(" ");
            func_Ani(1);
        }
    }
    printf("\n");

    // Terceira Linha
    for(i = 0; i<70; i++){  
        printf("#");
        func_Ani(1);
    }
    printf("\n");

    shows();
}

void pesquisar_Show(){
     system("clear||cls");
    int i;
     //Primeira Linha
    for(i = 0; i<70; i++){  
        printf("#");
        func_Ani(1);
    }
    printf("\n");

    //Segunda Linha
    for(i = 0;i<27; i++){
        if (i > 3 && i < 7){ 
            printf("+");
            func_Ani(15);
        } 
        else{
            printf(" ");
            func_Ani(15);
        }
    }
    printf("PESQUISAR SHOW");
    
    for(i = 0;i<31;i++){
        if (i > 19 && i < 24){
            printf("+");
            func_Ani(15);
        }
        else{
            printf(" ");
            func_Ani(1);
        }
    }
    printf("\n");

    // Terceira Linha
    for(i = 0; i<70; i++){  
        printf("#");
        func_Ani(1);
    }
    printf("\n");

    shows();
}


//############### FUNCÕES MÓDULO TÉCNICO ###################################################
void cadastro_Tecnico(){
    system("clear || cls");
    printf("CPF: ");
    printf("Nome completo: ");
    printf("Email:");
    printf("Telefone");
}

void atualizar_Tecnico(){
    system("clear || cls");
    printf("CPF: ");
    printf("Nome completo: ");
    printf("Email:");
    printf("Telefone");
}

void pesquisar_Tecnico(){
    system("clear || cls");
    printf("CPF: ");
}

void excluir_Tecnico(){
    system("clear || cls");
    printf("CPF: ");
}


//############### FUNÇÕES MÓDULO TÉCNICO ###################################################
void criar_Sessao(){
    system("clear || cls");
    printf("ID SESSÃO: ");
}

void procurar_Sessao(){
    system("clear || cls");
    printf("ID SESSÃO: ");
}

void atualizar_Sessao(){
    system("clear || cls");
    printf("ID SESSÃO: ");
}

void excluir_Sessao(){
    system("clear || cls");
    printf("ID SESSÃO: ");
}


//################# FUNÇÕES DE ANIMAÇÃO ##################################################
void ani_Encerrar(){
    printf("\n \n");
    
    int i;
    int j;
    for (i = 0; i < 4; i++){
        system("clear||cls");
        printf("ENCERRAR PROGRAMA ");
        for (j = 0; j < 5; j++){
            func_Ani(300);
            printf(". ");
        }
    }
    system("clear||cls");
    printf("PRORGRAMA ENCERRADO");
}

void func_Ani(int tempo){  //Função retirada do ChatGPT
    #ifdef _WIN64
        Sleep(tempo);
    #else
        struct timespec ts;
        ts.tv_sec = tempo / 1000;                 
        ts.tv_nsec = (tempo % 1000) * 1000000L;   
        nanosleep(&ts, NULL);
    #endif
}