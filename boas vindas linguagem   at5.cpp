#include <stdio.h>
#include <stdio.h>
#include <locale.h>


int main(){

setlocale(LC_ALL,"portuguese");

 int opcao;

    printf("Escolha um idioma de prefer�ncia (1 - Ingl�s, 2 - Espanhol, 3 - Franc�s): ");
    scanf("%d", &opcao); 

    switch (opcao) {
    	
        case 1:
        	
            printf("Welcome!\n");
            break;
            
        case 2:
        	
            printf("Bienvenido!\n");
            break;
            
        case 3:
        	
            printf("Bienvenue!\n");
            break;
            
        default:
            printf("Op��o inv�lida.\n");
    }
    // obrigado  google tradutor tmj ;


   

    

    return 0;
}
