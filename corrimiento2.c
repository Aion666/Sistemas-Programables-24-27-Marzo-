/*	Sistemas programables
	Alumno: Santos Gonzalez Miguel Angel
	7-8 am
	Corrimientos 
*/

# include <stdio.h>

int main(){
	char a=5,b,c,d,e;
	
	b= (a<<4);/*Corrimiento a la izquierda*/
	c= 12;
	d= b | c;
	a= (d>>4);/*Corrimiento a la derecha*/
	e= d & 15;
	printf("%d \n",a);
	printf("%d \n",e);
}
