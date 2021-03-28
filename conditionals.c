#include <stdio.h>
#include <stdlib.h>
/* **
 * Calse 2 - Condicionales 
 * Validar si dos números son iguales e imprimir el mensaje "N1 es igual N2"
 * de lo contrario imprimir cuál es el mayor y cuál es el menor 
 * **/
int main(){
    /** Código aquí **/
    int num_1 = 0;
    int num_2 = 0;
    printf("Dame un número: ");
    scanf("%d", &num_1);
    printf("Dame un número: ");
    scanf("%d", &num_2);
    if(num_1 == num_2){
        printf("%i es igual a %i \n", num_1, num_2);
    }else{
        if(num_1 > num_2){
            printf("%i es mayor a %i \n", num_1, num_2);
        }else{
            printf("%i es mayor a %i \n", num_2, num_1);
        }
    }
    /** **/
    system("pause");
    return 0;
}