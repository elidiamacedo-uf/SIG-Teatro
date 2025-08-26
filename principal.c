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
void criar_Sessao();
void procurar_Sessao();
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
    bool parada = true;
    while (parada){ 
        system("clear||cls");
        char executar;
        
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
        scanf("%c",&executar);
        getchar();

        if (executar == '1'){
            ingresso();
            }
        else{
            if (executar == '2'){      //Sistema IF-ELESE-IF Tirado do Livro Linguagem C Completa e Descomplicada de André Backes  página 84
                shows();
            }
            else{
                if (executar == '3'){
                    sessoes();
                }
                else{
                    if (executar == '4'){
                        tecnicos(); 
                    }
                    else{
                        if (executar == '5'){
                            printf("MÓDULO EM REFORMA");
                        }
                        else{
                            if (executar == '0'){
                                ani_Encerrar();
                                parada = false;
                            }
                            else{
                                printf("\n \n");
                                printf("!VALOR INVALIDO, POR FAVOR INSERIR APENAS UM DOS VALORES ACIMA!\n");
                                system("pause");
                            }
                        }
                    }
                }
            }
        }
    }
return 0;            
} 




void ingresso(){  
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
        printf("###                             3 - ATUALIZAR INGRESSO                            ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("###                             4 - PESQUISAR INGRESSO                            ###\n");
        func_Ani(tempo);
        printf("###                                                                               ###\n");
        func_Ani(tempo);
        printf("##                              0 - SAIR : ");
        scanf(" %c",&executar_I);
        getchar();

        if (executar_I == '1'){
            vender_Ingresso();
        }
        else{
            if (executar_I == '2'){
                excluir_Ingresso();
            }
            else{
                if (executar_I == '3'){
                    atualizar_Ingresso();
                }
                else{
                    if (executar_I == '4'){
                        pesquisar_Ingresso();
                    }
                    else{
                        if (executar_I == '0'){
                            parada_I = false;
                        }
                        else{
                            printf("\n \n");
                            printf("!VALOR INVALIDO, POR FAVOR INSERIR APENAS UM DOS VALORES ACIMA!\n");
                            system("pause");
                        }
                    }
                }
            }   
        }
    }
}

void shows(){  
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
        getchar();

        if (executar_S == '1'){
            cadastrar_Show();
        }
        else{
            if (executar_S == '2'){
                excluir_Show();
            }
            else{
                if (executar_S == '3'){
                    atualizar_Show();
                }
                else{
                    if (executar_S == '4'){
                        pesquisar_Show();
                    }
                    else{
                        if (executar_S == '0'){
                            parada_S = false;
                        }
                        else{
                            printf("\n \n");
                            printf("!VALOR INVALIDO, POR FAVOR INSERIR APENAS UM DOS VALORES ACIMA!\n");
                            system("pause");
                        }
                    }
                }
            }
        }
    }
}

void tecnicos(){
    int escolha;
        system("clear || cls");
        printf("###                             1 - CADASTRAR TECNICO                              ###\n");
        func_Ani(tempo);
        printf("###                             2 - PROCURAR TÉCNICO                               ###\n");
        func_Ani(tempo);
        printf("###                             3 - ATUALIZAR TÉCNICO                              ###\n");
        func_Ani(tempo);
        printf("###                             4 - DELETAR TÉCNICO                                ###\n");
        func_Ani(tempo);
        printf("###                             0 - VOLTAR AO MENU ANTERIOR...                     ###\n");
        scanf(" %d", &escolha);
    //repetição e afins
       if (escolha == '1'){
        cadastro_Tecnico();
       }
       else{
        if (escolha == '2'){
            pesquisar_Tecnico();
        }
        else{
            if (escolha == '3'){
                atualizar_Tecnico();
            }
            else{
                if (escolha == '4'){
                    excluir_Tecnico();
                }
            }
        }
        
       }
}

void sessoes(){
    int escolha;
        system("clear || cls");
        printf("###                             1 - CRIAR SESSÃO                                 ###\n");
        func_Ani(tempo);
        printf("###                             2 - PROCURAR SESSÃO                              ###\n");
        func_Ani(tempo);
        printf("###                             3 - ATUALIZAR SESSÃO                             ###\n");
        func_Ani(tempo);
        printf("###                             4 - DELETAR SESSÃO                               ###\n");
        func_Ani(tempo);
        printf("###                             0 - VOLTAR AO MENU ANTERIOR...                   ###\n");
        scanf("%d", &escolha);
//repetição e afins
        if (escolha == '1'){
        criar_Sessao();
       }
       else{
        if (escolha == '2'){
            procurar_Sessao();
        }
        else{
            if (escolha == '3'){
                atualizar_Sessao();
            }
            else{
                if (escolha == '4'){
                    excluir_Sessao();
                }
            }
        }
        
       }
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
    gets(nome);
    printf("V----------------------------------\n");
    printf("|  INSIRA O CÓDIGO DO SHOW: ");
    scanf("%d",&codigo_Show);
    getchar();
    printf("V----------------------------------\n");
    printf("|  ESCOLHA SUA CADEIRA: ");
    gets(cadeira);
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
    printf("V----------------------------------\n");
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
    printf("V----------------------------------\n");
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
    printf("V----------------------------------\n");
    system("pause");
}


//############### FUNÇÕES MÓDULO SHOWS #####################################################
void cadastrar_Show(){
    char nome[50];
    char data[10];
    char duracao[4];
    char personagens[100];
    char titulo[16] = "CADASTRAR SHOW";
    func_Ani_Left(titulo);

    printf("\n \n");
    printf("-----------------------------------\n");
    printf("|  INSIRA O NOME DO SHOW: ");
    gets(nome);
    printf("V----------------------------------\n");
    printf("|  INSIRA A/AS DATAS DO SHOW: ");
    gets(data);
    printf("V----------------------------------\n");
    printf("|  INSIRA A/AS DURACAOS DO SHOW: ");
    gets(duracao);
    printf("V----------------------------------\n");
    printf("|  INSIRA O/OS PERSONAGENS DO SHOW: ");
    gets(personagens);
    printf("V----------------------------------\n");
    system("pause");

}

void excluir_Show(){
    char titulo[16] = "EXCLUIR SHOW";
    func_Ani_Left(titulo);
}

void atualizar_Show(){
    char titulo[16] = "ATUALIZAR SHOW";
    func_Ani_Left(titulo);
}

void pesquisar_Show(){
    char titulo[16] = "PESQUISAR SHOW";
    func_Ani_Left(titulo);
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








