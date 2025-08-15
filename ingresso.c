#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int tempo = 100;

int main(){
    int executar;
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
    printf("###                             4 - PESUISAR SHOW                                 ###\n");
    Sleep(tempo);
    printf("###                                                                               ###\n");
    Sleep(tempo);
    printf("##                              0 - SAIR : ");
    scanf("%d",&executar);
    return 0;
}