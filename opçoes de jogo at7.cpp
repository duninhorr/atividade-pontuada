#include <stdio.h>
#include <stdio.h>
#include <locale.h>


int main(){

setlocale(LC_ALL,"portuguese"); 


   int num;
   int i ;
   
    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &num);

    for( i= num; i >= 0; i--) {

 contador = i ;

}
        contador= num;

     switch(num) {
        case 3:
            printf("Tr�s\n");
            break;
        case 2:
            printf("Dois\n");
            break;
        case 1:
            printf("Um\n");
            break;
        case 0:
            printf("Zero\n");
            break;
        default:
            printf("%d\n", num);
            break;
    
}

 

    return 0;
}



