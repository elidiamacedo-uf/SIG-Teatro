#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#ifdef _WIN64
    #include <windows.h> //Trecho de código tirado do ChatGPT
#else
    #include <unistd.h>
#endif


//ANIMAÇÕES
void ani_Encerrar();
void func_Ani(int tempo);
//MÓDULOS
void ingresso();
void vender_Ingresso();
void excluir_Ingresso();
void alterar_Ingresso();
void pesquisar_Ingresso();





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
                break;
                
            case '0':
                parada = false;
                ani_Encerrar();
                break;
            default:
                printf("\n \n");
                printf("!VALOR INVALIDO, POR FAVOR INSIRIR APENAS UM DOS VALORES ACIMA!\n");
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
                alterar_Ingresso();

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


void alterar_Ingresso(){
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

void func_Ani(int tempo){  //Função Tirada do ChatGPT
    #ifdef _WIN64
        Sleep(tempo);
       
    #else
        //usleep(tempo * 1000);
    #endif
}