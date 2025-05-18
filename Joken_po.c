#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escoj, escoc;
    srand(time(0));

    printf("Jogo de Jokenpô\n");
    printf("Escolha uma opção: \n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: \n");
    scanf("%d", &escoj);

    escoc = rand() % 3 + 1;

    switch (escoj)
    {
    case 1:
        printf("Jogador: Pedra - \n");
        break;
    case 2:
        printf("Jogador: Papel - \n");
        break;
     case 3:
        printf("Jogador: Tesoura - \n");
        break;
    default:
        printf("Opção inválida\n");
        break;
    }


    switch (escoc)
     {
    case 1:
        printf("Computador: Pedra -\n ");
        break;
    case 2:
        printf("Computador: Papel -\n ");
        break;
     case 3:
        printf("Computador: Tesoura -\n ");
        break;
  
     }
     if (escoc == escoj){

        printf("####JOGO EMPATOU!!!#####\n");
     }  else if ((escoj == 1) && (escoc == 3 ) ||
        (escoj == 2) && (escoc == 1) ||
        (escoj == 3) && (escoc == 2))
     {
        printf("Jogador ganhou");
     } else {
        printf("Jogador Perdeu!\n");
     }
      
     return 0;
}