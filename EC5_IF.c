#include <stdio.h>

int main(){
    /*Se a 'idade' for 18 ou mais, o programa  imprime "Você é maior de idade"
    No noso exemplo, 20 é maior que 18, então  a mensagem será exibida */
    
    int idade = 17;

    if(idade >= 18){
        printf("Você é maior de idade\n");
        printf("Dentro If\n");
    }
        printf("Fora If");
}