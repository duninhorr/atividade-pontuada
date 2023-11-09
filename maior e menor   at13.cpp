#include <stdio.h>
#include <stdio.h>
#include <locale.h>


int main(){

setlocale(LC_ALL,"portuguese"); 


	
     int num;
	 int contPar = 0;
	int contImpar = 0;
    float somaPar = 0;
	 float somaImpar = 0;

    printf("Digite um número inteiro (negativo para sair): ");
    scanf("%d", &num);


    while(num >= 0) {
    	
        if(num % 2 == 0) {
            contPar++;
            somaPar += num;
        } else {
            contImpar++;
            somaImpar += num;
            
        }


        printf("Digite um número inteiro (negativo para sair): ");
        scanf("%d", &num);
        
        
    }

    if(contPar > 0) {
    	
        printf("Média dos números pares: %.2f\n", somaPar / contPar);
        
    } else {
    	
        printf("Não foram digitados números pares.\n");
    }

    if(contImpar > 0) {
    	
        printf("Média dos números ímpares: %.2f\n", somaImpar / contImpar);
        
    } else {
    	
        printf("Não foram digitados números ímpares.\n");
    }

    return 0;
}

