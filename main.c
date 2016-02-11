#include <stdio.h>
#include <stdlib.h>
#include "LP_Leitura.h"
#include "LP_Utils.h"

/*void Menu_Registar() {
}
 */

/*Menu_login(){
 }
 */

void Menu_Principal() {
    int escolha1;
    do {
        printf("*************************************************\n");
        printf("*******************BEM-VINDO*********************\n");
        printf("****************ENTREGA-EM-MAO*******************\n");
        printf("*********************MENU************************\n");
        printf("*************************************************\n");
        printf("\n");
        printf("1 - LOGIN \n");
        printf("2 - REGISTAR \n");
        printf("3 - SAIR\n ");

        readShort(escolha1, 1, 3, "Escolha Uma opcao: ");

        switch (escolha1) {
            case '1':
                //Menu_Registo();
                break;
            case '2':
                //Menu_login();
                break;
            case'3':
                // printf("Encerrar aplicaçao");
            default:
                printf("Escolheu a opccao errada!");
        }
    } while (escolha1 < 3);
}

int main(int argc, char** argv) {

    Menu_Principal();

    return (EXIT_SUCCESS);
}

