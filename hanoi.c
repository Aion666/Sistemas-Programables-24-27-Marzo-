/*	Sistemas programables
	Alumno: Santos Gonzalez Miguel Angel
	7-8 am
	Número de movimientos
*/

#include<stdio.h>
int hanoi(int n){
    if(n==1)
        return 1;
    else
        return 2 * hanoi(n-1) + 1;
}
int main(){
    int disc, mov;
    printf("Torres de Hanoi \n");
    printf("Numero de discos: ");
	scanf("%i",&disc);
    printf("\tNumero de Movimientos : %i\n", hanoi(disc));
    return 0;
}
