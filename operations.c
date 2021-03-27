#include <stdio.h>
#include <stdlib.h>
/** 
 * Calse 1 Programación en C 
 * Realizar la suma de dos números
 * e imprimir el resultado en pantalla.
 * **/
int main(){
    /** Código aquí **/
    int num_1 = 0;
    int num_2 = 0;
    int result = 0;
    printf("Dame un número: ");
    scanf("%d", &num_1);
    printf("\nDame un número: ");
    scanf("%d", &num_2);
    result = num_1 + num_2;

    printf("Resultado de la suma de %i con %i es %i \n", num_1, num_2, result);

    /** **/
    system("pause");
    return 0;
}