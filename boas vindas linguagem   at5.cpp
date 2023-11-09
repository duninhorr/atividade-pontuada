#include <stdio.h>
#include <stdio.h>
#include <locale.h>


int main(){

setlocale(LC_ALL,"portuguese");

 int opcao;

    printf("Escolha um idioma de preferência (1 - Inglês, 2 - Espanhol, 3 - Francês): ");
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
            printf("Opção inválida.\n");
    }
    // obrigado  google tradutor tmj ;


   

    

    return 0;
}
