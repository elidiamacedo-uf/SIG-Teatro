#include <stdio.h>
#include <stdlib.h>
int tempo = 150000;
int main(){
    int executar;
    printf("#####################################################################################\n");
    usleep(tempo);
    printf("   +++                                INGRESSO                                 +++\n");
    usleep(tempo);
    printf("#####################################################################################\n");
    usleep(tempo);
    printf("###                             1 - VENDER INGRESSO                               ###\n");
    usleep(tempo);
    printf("###                                                                               ###\n");
    usleep(tempo);
    printf("###                             2 - EXCLUIR INGRESSO                              ###\n");
    usleep(tempo);
    printf("###                                                                               ###\n");
    usleep(tempo);
    printf("###                             3 - ALTERAR INGRESSO                              ###\n");
    usleep(tempo);
    printf("###                                                                               ###\n");
    usleep(tempo);
    printf("###                             4 - PESUISAR SHOW                                 ###\n");
    usleep(tempo);
    printf("###                                                                               ###\n");
    usleep(tempo);
    printf("##                              0 - SAIR : ");
    scanf("%d",&executar);
    return 0;
}