#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int maijn(int argc, char*argv[]){
    if(argc != 3) {
        printf("Você precisa informar os limites para essa geração do número\n");
        return 1;
    }


int min = atoi(argv[1]);
int max = atoi(argv[2]);

srand (time(NULL));

int numero = min + rand() % (max-min + 1);

printf("O número aleatório é %d\n",numero);

printf("Marcelo Rigotti")

return 0;
}
