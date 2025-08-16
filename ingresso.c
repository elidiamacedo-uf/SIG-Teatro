#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int tempo = 100;


void vender_Ingresso();

int main(){
    char executar;
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
    scanf("%c",&executar);

    switch (executar)
    {
        case '1':
            vender_Ingresso();
            break;
    
        default:
            break;
    
    }
    return 0;
}


void vender_Ingresso(){
    system("cls");
    printf("#####################################################################################\n");
    Sleep(tempo);
    printf("   +++                          VENDER INGRESSO                                +++\n");
    Sleep(tempo);
    printf("#####################################################################################\n");
    Sleep(tempo);
}