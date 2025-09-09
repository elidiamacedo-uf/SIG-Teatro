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

//DATA E HORA
void mostrar_data_hora();


//ANIMAÇÕES
void ani_Encerrar();
void func_Ani(int);
void func_Ani_Left();
void func_Ani_Thread();


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
void cadastrar_Sessao();
void pesquisar_Sessao();
void atualizar_Sessao();
void excluir_Sessao();

void tecnicos();
void cadastro_Tecnico();
void atualizar_Tecnico();
void pesquisar_Tecnico();
void excluir_Tecnico();

void equipe(){
     printf(" _    _ \n");
    printf("| |  | |\n");
    printf("| |  | |\n");
    printf("| |  | |\n");
    printf("| |  | |\n");
    printf("| |__| |\n");
    printf(" \\____/ \n\n");

    // Desenha a letra F
    printf(" ______ \n");
    printf("|  ____|\n");
    printf("| |__   \n");
    printf("|  __|  \n");
    printf("| |     \n");
    printf("|_|     \n\n");
                                         // A palavra UFRN foi feita pelo GEMINI
    // Desenha a letra R
    printf(" ______ \n");
    printf("|  _  \\\n");
    printf("| | | |\n");
    printf("| | | |\n");
    printf("| |_| |\n");
    printf("|  _  /\n");
    printf("|_| \\_\\\n\n");

    // Desenha a letra N
    printf(" _    _ \n");
    printf("| \\  / |\n");
    printf("|  \\/  |\n");
    printf("| |\\/| |\n");
    printf("| |  | |\n");
    printf("|_|  |_|\n");

    printf("\n \n");
    
    printf("             Universidade Federal do Rio Grande do Norte                 \n");
    printf("                 Disciplina DCT1106 -- Programacao                       \n");
    printf("                   Professor: Flavius Gorgonio                           \n");
    printf("#########################################################################\n");
    printf("-+-+-+-+-+-+-+-+-+- Sistema de Gestao de Teatro +-+-+-+-+-+-+-+-+-+-+-+-+\n");
    printf("#########################################################################\n");
    printf("\n");
    printf("             Projeto desenvolvido por:                                   \n");
    printf("             Aluno 1: Emilly Elidia Andrade Macedo dos Santos            \n");
    printf("             Aluno 2: Marcos Vinícius Dantas da Silva                    \n");
    printf("\n");
    printf("#########################################################################\n");
    printf("\n \n \n");
}
void proj_Descrit(){
    printf("=========================================================================================\n");
    printf("|                   Universidade Federal do Rio Grande do Norte                          |\n");
    printf("|                        Disciplina DCT1106 -- Programacao                               |\n");
    printf("|                           Professor: Flavius Gorgonio                                  |\n");
    printf("|                                                                                        |\n");
    printf("|   O Sistema de Gestao Teatral ou SGT, trata-se codigo produzido para fins pontuacao    |\n");
    printf("|   na disciplina de Programacao administrada pelo Professor Flavius Gorgonio.           |\n");
    printf("|                                                                                        |\n");
    printf("|   A linguagem de programacao utilizada e o C, se restrigindo apenas as suas bibliotecas|\n");
    printf("|   padroes.                                                                             |\n");
    printf("|                                                                                        |\n");
    printf("|   O sistema SGT e um software que gerencia e armazena dados referentes a uma casa de   |\n");
    printf("|   tetro, contanto com 4 modulos: Ingresso, Shows, Sessoes, Tecnicos e Relatorios.      |\n");               
    printf("|                                                                                        |\n");
    printf("|                                                                                        |\n");
    printf("=========================================================================================\n");
    printf("\n \n");
}

int tempo = 100;
int main() {
    
    bool parada = true;//
    do { 
        system("clear||cls");
        int executar;
        
        //proj_Descrit();
        //equipe();

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
        
        scanf("%d",&executar);
        getchar();

        switch (executar) {
            case 1:
                ingresso();
                break;
            case 2:
                shows();
                break;
            case 3:
                sessoes();
                break;
            case 4:
                tecnicos();
                break;        
            case 0:
                parada = false;
                break;
            
            default:
                printf("\n \n");
                printf("!VALOR INVALIDO, POR FAVOR INSERIR APENAS UM DOS VALORES ACIMA!\n");
                system("pause");
                break;
        }
    } while (parada);
    ani_Encerrar();

    return 0;            
} 


void ingresso() {  
    bool parada_I = true;
    do {  
        int executar_I;
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
        printf("###                             2 - PESQUISAR INGRESSO                              ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("###                             3 - ATUALIZAR INGRESSO                            ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("###                             4 - EXCLUIR INGRESSO                            ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("##                              0 - VOLTAR AO MENU ANTERIOR...  ");
        
        scanf(" %d",&executar_I);
        getchar();
        
        switch (executar_I) {
            case 1:
                vender_Ingresso();
                break;
            case 2:
                pesquisar_Ingresso();
                break;
            case 3:
                atualizar_Ingresso();
                break;
            case 4:
                excluir_Ingresso();
                break;
            case 0:
                parada_I = false;
                break;
            default:
                printf("\n \n");
                printf("!VALOR INVALIDO, POR FAVOR INSERIR APENAS UM DOS VALORES ACIMA!\n");
                system("pause");
                break;
        }
    } while (parada_I);
}

void shows(){  
    bool parada_S = true;
    do {  
        int executar_S;
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
        printf("###                             2 - PESQUISAR SHOW                                  ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("###                             3 - ATUALIZAR SHOW                                ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("###                             4 - EXCLUIR SHOW                                ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("##                              0 - SAIR : ");
        
        scanf(" %d",&executar_S);
        getchar();

        switch (executar_S) {
            case 1:
                cadastrar_Show();
                break;
            case 2:
                pesquisar_Show();
                break;
            case 3:
                atualizar_Show();
                break;
            case 4:
                excluir_Show();
                break;
            case 0:
                parada_S = false;
                break;
            default:
                printf("\n \n");
                printf("!VALOR INVALIDO, POR FAVOR INSERIR APENAS UM DOS VALORES ACIMA!\n");
                system("pause");
                break;
        }
    } while (parada_S);
}

void sessoes(){
    bool parada_P = true;
    do {
        int executar_P;
        system("clear || cls");
        printf("#####################################################################################\n");
        func_Ani(tempo);
        printf("   +++                                 SESSÃO                                    +++\n");
        func_Ani(tempo);
        printf("#####################################################################################\n");
        func_Ani(tempo);
        printf("###                             1 - CADASTRAR SESSÃO                                 ###\n");
        func_Ani(tempo);
        printf("###                                                                              ###\n");
        printf("###                             2 - PESQUISAR SESSÃO                              ###\n");
        printf("###                                                                                ###\n");
        func_Ani(tempo);
        printf("###                             3 - ATUALIZAR SESSÃO                             ###\n");
        printf("###                                                                                ###\n");
        func_Ani(tempo);
        printf("###                             4 - EXCLUIR SESSÃO                               ###\n");
        printf("###                                                                                ###\n");
        func_Ani(tempo);
        printf("###                             0 - VOLTAR AO MENU ANTERIOR...                   ###\n");
        scanf(" %d", &executar_P);
        getchar();

        switch (executar_P) {
            case 1:
                cadastrar_Sessao();
                break;
            case 2:
                pesquisar_Sessao();
                break;
            case 3:
                atualizar_Sessao();
                break;
            case 4:
                excluir_Sessao();
                break;
            case 0:
                parada_P = false;
                break;
            default:
                printf("\n \n");
                printf("!VALOR INVALIDO, POR FAVOR INSERIR APENAS UM DOS VALORES ACIMA!\n");
                system("pause");
                break;
        }
    } while (parada_P);
}
    
void tecnicos(){
    bool parada_T = true;
    do {
        int executar_T;
        system("clear || cls");
        printf("#####################################################################################\n");
        func_Ani(tempo);
        printf("   +++                                 TÉCNICOS                                  +++\n");
        func_Ani(tempo);
        printf("#####################################################################################\n");
        func_Ani(tempo);
        printf("###                             1 - CADASTRAR TECNICO                              ###\n");
        func_Ani(tempo);
        printf("###                                                                                ###\n");
        printf("###                             2 - PESQUISAR TÉCNICO                               ###\n");
        printf("###                                                                                ###\n");
        func_Ani(tempo);
        printf("###                             3 - ATUALIZAR TÉCNICO                              ###\n");
        printf("###                                                                                ###\n");
        func_Ani(tempo);
        printf("###                             4 - DELETAR TÉCNICO                                ###\n");
        printf("###                                                                                ###\n");
        func_Ani(tempo);
        printf("###                             0 - VOLTAR AO MENU ANTERIOR...                     ###\n");
        scanf(" %d", &executar_T);
        getchar();
        
        switch (executar_T){
            case 1:
                cadastro_Tecnico();
                break;
            case 2:
                pesquisar_Tecnico();
                break;
            case 3:
                atualizar_Tecnico();
                break;
            case 4:
                excluir_Tecnico();
                break;
            case 0:
                parada_T = false;
                break;
            default:
                printf("\n \n");
                printf("!VALOR INVALIDO, POR FAVOR INSERIR APENAS UM DOS VALORES ACIMA!\n");
                system("pause");
                break;
            }
    } while (parada_T);
}



//############### FUNÇÕES MÓDULO INGRESSO ##################################################
void vender_Ingresso(){
    char nome[30];
    int codigo_Show;
    char cadeira[2];
    char titulo[16] = "VENDER INGRESSO";
    
    func_Ani_Left(titulo);
    
    printf("\n \n");
    printf("-----------------------------------\n");
    printf("|  INSIRA O NOME: ");
    fgets(nome,30,stdin);
    printf("V----------------------------------\n");
    printf("|  INSIRA O CÓDIGO DO SHOW: ");
    scanf("%d",&codigo_Show);
    getchar();
    printf("V----------------------------------\n");
    printf("|  ESCOLHA SUA CADEIRA: ");
    fgets(cadeira,2,stdin);
    printf("V----------------------------------\n");
    system("pause");
}

void excluir_Ingresso(){
    int codigo;
    char titulo[19] = "EXCLUIR INGRESSO";
    func_Ani_Left(titulo);
    
    printf("\n \n");
    printf("-----------------------------------\n");
    printf("|  INSIRA O CODIGO DO INGRESSO: ");
    scanf("%d",&codigo);
    printf("-----------------------------------\n");
    system("pause");
}

void atualizar_Ingresso(){
    int codigo;
    char titulo[19] = "ATUALIZAR INGRESSO";
    func_Ani_Left(titulo);

    printf("\n \n");
    printf("-----------------------------------\n");
    printf("|  INSIRA O CODIGO DO INGRESSO: ");
    scanf("%d",&codigo);
    printf("-----------------------------------\n");
    system("pause");
}

void pesquisar_Ingresso(){
    int codigo;
    char titulo[19] = "PESQUISAR INGRESSO";
    func_Ani_Left(titulo);

    printf("\n \n");
    printf("-----------------------------------\n");
    printf("|  INSIRA O CODIGO DO INGRESSO: ");
    scanf("%d",&codigo);
    printf("-----------------------------------\n");
    system("pause");
}


//############### FUNÇÕES MÓDULO SHOWS #####################################################
void cadastrar_Show(){
    char nome[30]; 
    char data[10];
    char duracao[4];
    char personagens[100];
    char titulo[16] = "CADASTRAR SHOW";
    func_Ani_Left(titulo);

    printf("\n \n");
    printf("-----------------------------------\n");
    printf("|  INSIRA O NOME DO SHOW: ");
    fgets(nome,30,stdin);
    printf("V----------------------------------\n");
    printf("|  INSIRA A/AS DATAS DO SHOW: ");
    fgets(data,10,stdin);
    printf("V----------------------------------\n");
    printf("|  INSIRA A/AS DURACAOS DO SHOW: ");
    fgets(duracao,4,stdin);;
    printf("V----------------------------------\n");
    printf("|  INSIRA O/OS PERSONAGENS DO SHOW: ");
    fgets(personagens,100,stdin);
    printf("V----------------------------------\n");
    system("pause");

}

void excluir_Show(){
    int codigo;
    char titulo[16] = "EXCLUIR SHOW";
    func_Ani_Left(titulo);

    printf("\n \n");
    printf("-----------------------------------\n");
    printf("|  INSIRA O CODIGO DO SHOW: ");
    scanf("%d",&codigo);
    printf("V----------------------------------\n");
}

void atualizar_Show(){
    int codigo;
    char titulo[16] = "ATUALIZAR SHOW";
    func_Ani_Left(titulo);

    printf("\n \n");
    printf("-----------------------------------\n");
    printf("|  INSIRA O CODIGO DO SHOW: ");
    scanf("%d",&codigo);
    printf("V----------------------------------\n");
}

void pesquisar_Show(){
    int codigo;
    char titulo[16] = "PESQUISAR SHOW";
    func_Ani_Left(titulo);

    printf("\n \n");
    printf("-----------------------------------\n");
    printf("|  INSIRA O CODIGO DO SHOW: ");
    scanf("%d",&codigo);
    printf("-----------------------------------\n");
}


//############### FUNCÕES MÓDULO TÉCNICO ###################################################
void cadastro_Tecnico(){
    char cpf[15];
    char nome[30];
    char funcao[16];
    char email[40];
    char telefone[16];
    
    char titulo[19] = "CADASTRAR TÉCNICO";
    func_Ani_Left(titulo);
    printf("\n \n");
    printf("-----------------------------------\n");
    printf("|  INSIRA O CPF DO TÉCNICO: ");  //** Deixarei assim por enquanto, sem validação
    fgets(cpf, sizeof(cpf), stdin);

    printf("-----------------------------------\n");
    printf("|  INSIRA O NOME DO TÉCNICO: ");
    fgets(nome, sizeof(nome), stdin);

    printf("-----------------------------------\n");
    printf("|  INSIRA A FUNÇÃO DO TÉCNICO: ");
    fgets(funcao, sizeof(funcao), stdin);

    printf("-----------------------------------\n");
    printf("|  INSIRA O EMAIL DO TÉCNICO: ");
    fgets(email,sizeof(email),stdin);
    printf("-----------------------------------\n");//
    
    printf("|  INSIRA O TELEFONE: ");
    fgets(telefone,sizeof(telefone),stdin);
    printf("-----------------------------------\n");

}

void atualizar_Tecnico(){
    char cpf[15];
    char titulo[19] = "ATUALIZAR TÉCNICO";
    func_Ani_Left(titulo);
    printf("\n \n");
    printf("-----------------------------------\n");
    printf("|  INSIRA O CPF DO TÉCNICO: ");  //** Deixarei assim por enquanto, sem validação
    fgets(cpf, sizeof(cpf), stdin);

    // procurar se há esse cpf
    // se sim, para alterar os dados tem que saber quais dados quer alterar
}

void pesquisar_Tecnico(){
    char cpf[15];
    
    char titulo[19] = "PESQUISAR TÉCNICO";
    func_Ani_Left(titulo);
    printf("\n \n");
    printf("-----------------------------------\n");
    printf("|  INSIRA O CPF DO TÉCNICO: ");  //** Deixarei assim por enquanto, sem validação
    fgets(cpf, sizeof(cpf), stdin);

}

void excluir_Tecnico(){
    char cpf[15];
    char titulo[19] = "EXCLUIR TÉCNICO";
    func_Ani_Left(titulo);
    printf("\n \n");

    printf("-----------------------------------\n");
    printf("|  INSIRA O CPF DO TÉCNICO: ");  //** Deixarei assim por enquanto, sem validação
    fgets(cpf, sizeof(cpf), stdin);

}


//######################### FUNÇÕES MÓDULO SESSÃO ###################################################
void cadastrar_Sessao(){
    int codigo_show;
    int tempo = 100;

    char nome_show[50];
    char data[32]; //até o momento, nao há nenhuma comparação de data e hora
    char hora[16]; //pesquisar
    float preco;
    mostrar_data_hora(data, hora); //funcao adicionada para hora e data atuais


    char titulo[19]= "CADASTRAR SESSÃO";
    func_Ani_Left(titulo);
    printf("\n \n");

    printf("-----------------------------------\n");
    printf("|  INSIRA O CÓDIGO DA SESSÃO: ");  
    scanf("%d", &codigo_show);
    getchar();

    printf("-----------------------------------\n");
    printf("|  INSIRA O NOME DO SHOW: ");
    fgets(nome_show, sizeof(nome_show), stdin);

    printf("-----------------------------------\n");
    printf("|  INSIRA O PREÇO DO SHOW: ");
    scanf("%f", &preco);

    printf("-----------------------------------\n");
    printf("|  DATA DA SESSÃO: %s\n  ", data);

    printf("-----------------------------------\n");
    printf("|  HORA DA SESSÃO: %s\n  ", hora);


    printf("\nRESUMO DA SESSÃO:\n");
    printf("Codigo: %d\n", codigo_show);
    printf("Show: %s\n", nome_show);
    printf("Data: %s\n", data);
    printf("Hora: %s\n", hora);
    printf("Preço: R$ %.2f\n", preco);
    system("pause");
}

void pesquisar_Sessao(){
    int codigo_show;

    char titulo[19]= "PROCURAR SESSÃO";
    func_Ani_Left(titulo);
    printf("\n \n");

    printf("-----------------------------------\n");
    printf("|  INSIRA O CÓDIGO DA SESSÃO: "); 
    scanf("%d", &codigo_show);
    getchar();

}

void atualizar_Sessao(){
    int codigo_show;

    char titulo[19]= "ATUALIZAR SESSÃO";
    func_Ani_Left(titulo);
    printf("\n \n");

    printf("-----------------------------------\n");
    printf("|  INSIRA O CÓDIGO DA SESSÃO: "); 
    scanf("%d", &codigo_show);
    getchar();

}

void excluir_Sessao(){
    int codigo_show;

    char titulo[19]= "EXCLUIR SESSÃO";
    func_Ani_Left(titulo);
    printf("\n \n");

    printf("-----------------------------------\n");
    printf("|  INSIRA O CÓDIGO DA SESSÃO: "); 
    scanf(" %d", &codigo_show);
    getchar();

}

//############# FUNÇÕES DE DATA E HORA ##############################

void mostrar_data_hora(char * data, char * hora){

    time_t agora; //Função tirada do petbcc.ufscar.br/timefuncoes/#time e adaptada com auxílio de IA
    time(&agora); //time_t => EPOCH / 01/01/1970

    struct tm *t = localtime(&agora); //struct tm *t quebra o epoch e deixa legível e formatado

    snprintf(data, 32, "%02d/%02d/%04d", t->tm_mday, t->tm_mon + 1, t->tm_year + 1900);
    snprintf(hora, 16, "%02d:%02d", t->tm_hour, t-> tm_min); // formatação para data e hora
    
    func_Ani(tempo);
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
            fflush(stdout); 
        }
    }
    system("clear||cls");
    printf("PROGRAMA ENCERRADO\n");
}

void func_Ani(int tempo){  //Função retirada do ChatGPT
    #ifdef _WIN64
        Sleep(tempo);
    #else
        usleep(tempo * 1000); 
        //struct timespec ts;
        //ts.tv_sec = tempo / 1000;                 
        //ts.tv_nsec = (tempo % 1000) * 1000000L;   
        //nanosleep(&ts, NULL);
    #endif
}

void func_Ani_Left(char titulo[30]){
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
    printf("%s",titulo);
    
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
 
}