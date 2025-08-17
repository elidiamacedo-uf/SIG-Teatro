#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void ingresso();
void vender_Ingresso();



int tempo = 100;
int main() {
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
    printf("###                             5 - RELATORIO                                      ###\n");
    Sleep(tempo);
    printf("###                                                                                ###\n");
    Sleep(tempo);
    printf("##                              0 - SAIR : ");
    scanf(" %c",&executar);

    switch (executar)
    {
        case '1':
            ingresso();
            break;
        case '2':
             
    
        default:
            break;
    
    }
    return 0;
}



void ingresso(){  
    char executar_I;
    system("cls");
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
          break;
        case '2':
             
    
        default:
            break;
    
    }
}


void vender_Ingresso(){
    system("cls");
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

}
