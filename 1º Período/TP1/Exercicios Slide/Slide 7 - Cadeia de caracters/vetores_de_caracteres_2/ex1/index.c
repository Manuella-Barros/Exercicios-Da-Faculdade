//inicializando um vetor (array)
#include <stdio.h>
#include <string.h>

int main(void){
    char texto[100];
    int contagemEspaco = 0;

    printf("Insira um texto\n");
    fgets(texto, 100, stdin);
    //printf("\n%s\n", texto); não entendi pq não coloca o [100]

    for(int i = 0; i <= strlen(texto); i++){
        if(texto[i] == ' '){
            contagemEspaco++;
        }
    }

    printf("Existem %i espacos nesse texto\n", contagemEspaco);

}