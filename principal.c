#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>


//ANIMAÇÕES
void ani_Encerrar();
//MÓDULOS
void ingresso();
void vender_Ingresso();
void excluir_Ingresso();


int tempo = 100;
int main() {
    boolean parada = TRUE;
    while (parada){ 
        system("clear||cls");
        char executar;
        printf("#####################################################################################\n");
        Sleep(tempo);
        printf("   +++                           SISTEMA DE TEATRO                             +++\n");
        Sleep(tempo);
        printf("#####################################################################################\n");
        Sleep(tempo);
        printf("###                             1 - INGRESSO                                      ###\n");
        Sleep(tempo);
        printf("###                                                                               ###\n");
        Sleep(tempo);
        printf("###                             2 - SHOWS/PECAS                                   ###\n");
        Sleep(tempo);
        printf("###                                                                               ###\n");
        Sleep(tempo);
        printf("###                             3 - SESSOES                                       ###\n");
        Sleep(tempo);
        printf("###                                                                               ###\n");
        Sleep(tempo);
        printf("###                             4 - TECNICOS                                      ###\n");
        Sleep(tempo);
        printf("###                                                                               ###\n");
        Sleep(tempo);
        printf("###                             5 - RELATORIO                                     ###\n");
        Sleep(tempo);
        printf("###                                                                               ###\n");
        Sleep(tempo);
        printf("##                              0 - SAIR : ");
        scanf("%c",&executar);

        switch (executar)
        {
            case '1':
                ingresso();
                break;
            case '2':
                break;
            case '3':
                break
                
            case '0':
                parada = FALSE;
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
    boolean parada_I = TRUE;
    while (parada_I){  
        char executar_I;
        system("clear||cls");
        printf("#####################################################################################\n");
        Sleep(tempo);
        printf("   +++                                INGRESSO                                 +++\n");
        Sleep(tempo);
        printf("#####################################################################################\n");
        Sleep(tempo);
        printf("###                             1 - VENDER INGRESSO                               ###\n");
        Sleep(tempo);
        printf("###                                                                               ###\n");
        Sleep(tempo);
        printf("###                             2 - EXCLUIR INGRESSO                              ###\n");
        Sleep(tempo);
        printf("###                                                                               ###\n");
        Sleep(tempo);
        printf("###                             3 - ALTERAR INGRESSO                              ###\n");
        Sleep(tempo);
        printf("###                                                                               ###\n");
        Sleep(tempo);
        printf("###                             4 - PESQUISAR SHOW                                ###\n");
        Sleep(tempo);
        printf("###                                                                               ###\n");
        Sleep(tempo);
        printf("##                              0 - SAIR : ");
        scanf(" %c",&executar_I);

        switch (executar_I)
        {
            case '1':
                vender_Ingresso();
                parada_I = FALSE;
            case '2':
                excluir_Ingresso();
                parada_I = FALSE;
            case '0':
                parada_I = FALSE;
                main();
            default:
            
                printf("\n");
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
        Sleep(1);
    }
    printf("\n");

    //Segunda Linha
    for(i = 0;i<27; i++){
        if (i > 3 && i < 7){ 
            printf("+");
            Sleep(15);
        } 
        else{
            printf(" ");
            Sleep(15);
        }
    }
    printf("VENDER INGRESSO");
    
    for(i = 0;i<31;i++){
        if (i > 19 && i < 24){
            printf("+");
            Sleep(15);
        }
        else{
            printf(" ");
            Sleep(0.9);
        }
    }
    printf("\n");

    // Terceira Linha
    for(i = 0; i<70; i++){  
        printf("#");
        Sleep(1);
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
        Sleep(1);
    }
    printf("\n");

    //Segunda Linha
    for(i = 0;i<27; i++){
        if (i > 3 && i < 7){ 
            printf("+");
            Sleep(15);
        } 
        else{
            printf(" ");
            Sleep(15);
        }
    }
    printf("EXCLUIR INGRESSO");
    
    for(i = 0;i<31;i++){
        if (i > 19 && i < 24){
            printf("+");
            Sleep(15);
        }
        else{
            printf(" ");
            Sleep(0.9);
        }
    }
    printf("\n");

    // Terceira Linha
    for(i = 0; i<70; i++){  
        printf("#");
        Sleep(1);
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
            printf(". ");
            Sleep(300);
        }w
    }
    system("clear||cls");
    printf("PROGRAMA ENCERRADO");
}